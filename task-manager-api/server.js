const express = require('express');
const fs = require('fs');
const path = require('path');

const app = express();
const port = process.env.PORT || 5000;
const tasksFile = path.join(__dirname, 'data', 'tasks.json');
const tasks = JSON.parse(fs.readFileSync(tasksFile, 'utf8'));
let nextTaskId = tasks.reduce((highestId, task) => Math.max(highestId, task.id), 0) + 1;

function saveTasks() {
  fs.writeFileSync(tasksFile, `${JSON.stringify(tasks, null, 2)}\n`);
}

app.use((req, res, next) => {
  console.log(`${req.method} ${req.originalUrl} - ${new Date().toISOString()}`);
  next();
});

app.use(express.json());

function requireJsonForWrites(req, res, next) {
  if ((req.method === 'POST' || req.method === 'PUT') && !req.is('application/json')) {
    return res.status(400).json({ error: 'Content-Type: application/json is required' });
  }
  next();
}

app.use(requireJsonForWrites);

function validateTaskId(req, res, next) {
  if (!/^\d+$/.test(req.params.id)) {
    return res.status(400).json({ error: 'Task ID must be a positive integer' });
  }
  req.taskId = Number(req.params.id);
  next();
}

function findTask(taskId) {
  return tasks.find((task) => task.id === taskId);
}

app.get('/tasks', (req, res) => {
  res.status(200).json(tasks);
});

app.get('/tasks/:id', validateTaskId, (req, res, next) => {
  const task = findTask(req.taskId);
  if (!task) {
    return next({ status: 404, message: 'Task not found' });
  }
  res.status(200).json(task);
});

app.post('/tasks', (req, res, next) => {
  const { title, description = '', completed = false } = req.body;
  if (typeof title !== 'string' || title.trim() === '') {
    return next({ status: 400, message: 'title is required' });
  }
  if (typeof description !== 'string' || typeof completed !== 'boolean') {
    return next({ status: 400, message: 'description must be text and completed must be boolean' });
  }

  const task = {
    id: nextTaskId++,
    title: title.trim(),
    description,
    completed
  };
  tasks.push(task);
  saveTasks();
  res.status(201).json(task);
});

app.put('/tasks/:id', validateTaskId, (req, res, next) => {
  const task = findTask(req.taskId);
  if (!task) {
    return next({ status: 404, message: 'Task not found' });
  }

  const { title, description = '', completed = false } = req.body;
  if (typeof title !== 'string' || title.trim() === '') {
    return next({ status: 400, message: 'title is required' });
  }
  if (typeof description !== 'string' || typeof completed !== 'boolean') {
    return next({ status: 400, message: 'description must be text and completed must be boolean' });
  }

  task.title = title.trim();
  task.description = description;
  task.completed = completed;
  saveTasks();
  res.status(200).json(task);
});

app.delete('/tasks/:id', validateTaskId, (req, res, next) => {
  const taskIndex = tasks.findIndex((task) => task.id === req.taskId);
  if (taskIndex === -1) {
    return next({ status: 404, message: 'Task not found' });
  }

  const [deletedTask] = tasks.splice(taskIndex, 1);
  saveTasks();
  res.status(200).json({ message: 'Task deleted', task: deletedTask });
});

app.use((req, res) => {
  res.status(404).json({ error: 'Route not found', path: req.originalUrl });
});

app.use((err, req, res, next) => {
  console.error(err.stack || err.message || err);
  const status = Number.isInteger(err.status) ? err.status : 500;
  res.status(status).json({ error: status === 500 ? 'Something went wrong' : err.message });
});

app.listen(port, () => {
  console.log(`Server running on port ${port}`);
});

module.exports = app;

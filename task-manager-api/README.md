# Task Manager API

A REST API built with Express. Tasks are stored in `data/tasks.json`, so you can inspect the latest data directly in VS Code and keep it between server restarts.

## Run

```bash
npm install
npm start
```

The server listens on `http://localhost:5000`.

## Endpoints

- `GET /tasks` - list tasks
- `GET /tasks/:id` - get one task
- `POST /tasks` - create a task
- `PUT /tasks/:id` - replace a task
- `DELETE /tasks/:id` - delete a task

POST and PUT requests require the header `Content-Type: application/json`.

Example request body:

```json
{
  "title": "Finish Express assignment",
  "description": "Test all API routes",
  "completed": false
}
```

Every request is logged with its method, URL, and timestamp. Unknown routes return structured JSON, and the final middleware handles unexpected errors without exposing stack traces to clients.

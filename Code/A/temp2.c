#include <stdio.h>
#include <unistd.h>
#include <sys/wait.h>
#include <stdlib.h>

int main()
{
    pid_t pid;
    int status;

    pid = fork();

    if (pid < 0)
    {
        perror("fork");
        return 1;
    }

    if (pid == 0)
    {
        printf("Child process\n");
        printf("Child PID  = %d\n", getpid());
        printf("Parent PID = %d\n", getppid());

        execlp("ls", "ls", "-l", NULL);

        perror("exec");
        exit(1);
    }
    else
    {
        printf("Parent process\n");
        printf("Parent PID = %d\n", getpid());

        waitpid(pid, &status, 0);

        printf("Child completed\n");
    }

    return 0;
}
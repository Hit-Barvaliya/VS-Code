#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>

int main()
{
    int fd1, fd2;
    char buffer[1024];
    ssize_t n;

    fd1 = open("input.txt", O_RDONLY);

    if (fd1 == -1)
    {
        perror("open input");
        return 1;
    }

    fd2 = open("output.txt",
               O_WRONLY | O_CREAT | O_TRUNC,
               0644);

    if (fd2 == -1)
    {
        perror("open output");
        close(fd1);
        return 1;
    }

    while ((n = read(fd1, buffer, sizeof(buffer))) > 0)
    {
        if (write(fd2, buffer, n) != n)
        {
            perror("write");
            close(fd1);
            close(fd2);
            return 1;
        }
    }

    close(fd1);
    close(fd2);

    printf("File copied successfully.\n");

    return 0;
}
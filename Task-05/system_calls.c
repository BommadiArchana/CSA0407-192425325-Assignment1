
#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>

int main()
{
    int fd;
    char buffer[100];
    ssize_t bytes;

    // Create and write into a file
    fd = open("sample.txt",
              O_WRONLY | O_CREAT | O_TRUNC, 0644);

    if (fd < 0)
    {
        perror("File creation failed");
        return 1;
    }

    char message[] = "Hello! This is a system call demonstration.\n";

    write(fd, message, sizeof(message) - 1);
    close(fd);

    // Open and read the file
    fd = open("sample.txt", O_RDONLY);

    if (fd < 0)
    {
        perror("File opening failed");
        return 1;
    }

    printf("Reading file contents:\n");

    while ((bytes = read(fd, buffer, sizeof(buffer) - 1)) > 0)
    {
        buffer[bytes] = '\0';
        printf("%s", buffer);
    }

    close(fd);

    printf("\nSystem calls demonstrated successfully.\n");

    return 0;
}

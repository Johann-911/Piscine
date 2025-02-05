#include "read_file.h"
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>

char *read_file(char *filename)
{
    int fd;
    int bytes_read;
    char *buffer;

    buffer = (char *)malloc(BUFFER_SIZE);
    if (!buffer)
        return (NULL);

    fd = open(filename, O_RDONLY);
    if (fd < 0)
    {
        free(buffer);
        return (NULL);
    }

    bytes_read = read(fd, buffer, BUFFER_SIZE - 1);
    if (bytes_read < 0)
    {
        free(buffer);
        close(fd);
        return (NULL);
    }

    buffer[bytes_read] = '\0';
    close(fd);

    return (buffer);
}
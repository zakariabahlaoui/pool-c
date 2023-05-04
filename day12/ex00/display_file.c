#include <unistd.h>
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>

void display_file(const char *filename)
{
    int fd;
    char buff[25];
    ssize_t read_size;

    fd = open(filename, O_RDONLY);

    if (fd < 0)
        return;

    read_size = read(fd, buff, 25);

    while (read_size > 0)
    {
        write(1, buff, read_size);
        read_size = read(fd, buff, 25);
    }

    close(fd);
}

int main(int argc, char *argv[])
{
    if (argc == 1)
        write(1, "File name missing.\n", 19);
    else if (argc > 2)
        write(1, "Too many arguments.\n", 19);
    else
        display_file(argv[1]);
    return (0);
}

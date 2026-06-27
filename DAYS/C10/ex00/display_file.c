#include <unistd.h>
#include <fcntl.h>

int main(int argc, char **argv)
{
    int fd;
    char buf[4096];
    int bytes_read;

    if(argc == 1)
    {
        write(2, "File name missing.\n", 19);
        return(1);
    }
    if(argc > 2)
    {
        write(2, "Too many arguments.\n", 20);
        return(1);
    }
    fd = open(argv[1], O_RDONLY);
    bytes_read = read(fd, buf, 4096);
    while(bytes_read > 0)
    {
        write(1, buf, bytes_read);
        bytes_read = read(fd, buf, 4096);
    }
    close(fd);
    return(0);
}
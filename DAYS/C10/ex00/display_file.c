#include <unistd.h>
#include <fcntl.h>

int	main(int argc, char **argv)
{
	int  fd;
	char buf[4096];
	int bytes;

	if( argc < 2)
	{
		write(2, "File name missing.\n", 19);
		return(1);
	}
	if(argc > 2)
	{
		write(2, "Too many arguments.\n", 20);
		return(1);
	}
	fd = open (argv[1], O_RDONLY);
	if(fd < 0)
	{
		write(2, "Cannot open file.\n", 18);
		return(1);
	}
	while ((bytes = read(fd, buf, 4096)) > 0)
	{
		write(1, buf, bytes);
	}
	close(fd);
	return (0);
}





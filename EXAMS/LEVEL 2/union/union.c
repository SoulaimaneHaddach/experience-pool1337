#include <unistd.h>

int check_str2(char c, char *str)
{
	int i;

	i = 0;
	while(str[i])
	{
		if(c == str[i])
			return(1);
		i++;
	}
	return(0);
}

int check_str1(char c, char *str, int pos)
{
	int i;

	i = 0;
	while(i < pos)
	{
		if(c == str[i])
			return(1);
		i++;
	}
	return(0);
}

int main(int argc, char **argv)
{
	int i;

	if(argc != 3)
    {
        write(1, "\n", 1);
        return(0);
    }
    i = 0;
    while(argv[1][i])
    {
        if(check_str1(argv[1][i], argv[1], i) == 0)
            write(1, &argv[1][i], 1);
        i++;
    }
    i = 0;
    while(argv[2][i])
    {
        if(check_str2(argv[2][i], argv[1]) == 0)
            if(check_str1(argv[2][i], argv[2], i) == 0)
                write(1, &argv[2][i], 1);
        i++;
    }
    write(1, "\n", 1);
    return(0);
}
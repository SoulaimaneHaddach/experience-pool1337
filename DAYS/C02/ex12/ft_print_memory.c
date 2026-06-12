#include <unistd.h>

void	print_addr(unsigned long addr)
{
	char			*base;
	char			buf[16];
	int				i;

	base = "0123456789abcdef";
	i = 15;
	while (i >= 0)
	{
		buf[i] = base[addr % 16];
		addr /= 16;
		i--;
	}
	write(1, buf, 16);
}

void	print_hex(unsigned char *addr, unsigned int size, unsigned int offset)
{
	char			*base;
	unsigned int	i;

	base = "0123456789abcdef";
	i = 0;
	while (i < 16)
	{
		if (i % 2 == 0)
			write(1, " ", 1);
		if (offset + i < size)
		{
			write(1, &base[addr[offset + i] / 16], 1);
			write(1, &base[addr[offset + i] % 16], 1);
		}
		else
			write(1, "  ", 2);
		i++;
	}
}

void	print_chars(unsigned char *addr, unsigned int size, unsigned int offset)
{
	unsigned int	i;
	char			c;

	i = 0;
	while (i < 16 && offset + i < size)
	{
		if (addr[offset + i] >= 32 && addr[offset + i] <= 126)
			c = addr[offset + i];
		else
			c = '.';
		write(1, &c, 1);
		i++;
	}
}

void	*ft_print_memory(void *addr, unsigned int size)
{
	unsigned char	*str;
	unsigned int	offset;

	if (size == 0)
		return (addr);
	str = (unsigned char *)addr;
	offset = 0;
	while (offset < size)
	{
		print_addr((unsigned long)(str + offset));
		write(1, ":", 1);
		print_hex(str, size, offset);
		write(1, "  ", 2);
		print_chars(str, size, offset);
		write(1, "\n", 1);
		offset += 16;
	}
	return (addr);
}
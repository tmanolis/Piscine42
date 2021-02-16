#include <unistd.h>

void	ft_putstr(char *str)
{
	while (*str != '\0')
	{
		write(1, str, 1);
		str++;
	}
}

int	main(int agrc, char **argv)
{
	ft_putstr(argv[0]);
	return (0);
}

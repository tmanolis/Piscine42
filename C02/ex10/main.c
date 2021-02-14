#include <stdio.h>

unsigned int ft_strlcpy(char *dest, char *src, unsigned int size);

int		main(void)
{
	char dest[] = "OKAY";
	char src[] = "Coucou c'est nous";
	unsigned int size;

	size = 4;

	printf("%s\n%s\n\n", dest, src);
	ft_strlcpy(dest, src, size);
	printf("%s\n%s\n\n", dest, src);
	return (0);
}

#include <stdio.h>
#include <string.h>

unsigned int ft_strlcat(char *dest, char *src, unsigned int size);

int	main(void)
{
	char dest[20] = "Coucou";
	char src[] = "Toi Moi";
	unsigned int size;

	size = 7;
	
	printf("%s\n%s\n", dest, src);
	ft_strlcat(dest, src, size);
	printf("%s\n", dest);
	printf("%lu\n", strlcat(dest, src, size));
	printf("%u\n", ft_strlcat(dest, src, size));

	return (0);
}

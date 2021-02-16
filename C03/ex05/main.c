#include <stdio.h>
#include <string.h>

unsigned int ft_strlcat(char *dest, char *src, unsigned int size);
int ft_strlen(char *str);

int	main(void)
{
	char dest[30] = "Toi";
	char src[] = "Hello";
	
	char dest1[30] = "Toi";
	char src2[] = "Hello";
	unsigned int size;

	size = 0;
	
	printf("%s\n%s\n", dest, src);
	printf("%s %lu\n", "la vraie fonction :", strlcat(dest1, src2, size));
	printf("%s %u\n", "ma fonction :", ft_strlcat(dest, src, size));

	return (0);
}

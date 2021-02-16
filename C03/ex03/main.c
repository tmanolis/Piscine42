#include <stdio.h>
#include <string.h>

char *ft_strncat(char *dest, char *src, unsigned int nb);

int	main(void)
{
	char dest[30] = "Coucou";
	char src[] = "Toi mon joli";
	unsigned int nb;
	
	char dest1[30] = "Coucou";
	char src2[] = "Toi mon joli";

	nb = 6;
	printf("%s\n%s\n%d\n", dest, src, nb);
	printf("%s %s\n", "ma fonction :", ft_strncat(dest, src, nb));
	printf("%s %s\n", "la vraie fonction :", strncat(dest1, src2, nb));
	
	return (0);
}


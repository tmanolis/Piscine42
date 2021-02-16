#include <stdio.h>
#include <string.h>

char *ft_strcat(char *dest, char *src);

int	main(void)
{
	char dest[30] = "Coucou";
	char src[] = "Toi mon joli";

	char dest1[30] = "Coucou";
	char src2[] = "Toi mon joli";

	printf("%s\n%s\n", dest, src);
	printf("%s %s\n", "ma fonction :", ft_strcat(dest, src));
	printf("%s %s\n", "la vraie fonction :", strcat(dest1, src2));

	return (0);
}

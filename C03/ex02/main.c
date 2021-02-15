#include <stdio.h>

char *ft_strcat(char *dest, char *src);

int	main(void)
{
	char dest[30] = "Coucou";
	char src[] = "Toi mon joli";

	printf("%s\n%s\n", dest, src);
	ft_strcat(dest, src);
	printf("%s", dest);
	
	return (0);
}

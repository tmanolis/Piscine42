#include <stdio.h>
#include <string.h>

int ft_strncmp(char *s1, char *s2, unsigned int n);

int 	main(void)
{
	char s1[] = "Salut";
	char s2[] = "Sblut";
	unsigned int nb;

	nb = 4;
	printf("%s\n%s\n", s1, s2);	
	printf("%d\n", ft_strncmp(s1, s2, nb));	
	printf("%d\n", strncmp(s1, s2, nb));	
}


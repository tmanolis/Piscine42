#include <stdio.h>

int ft_strncmp(char *s1, char *s2, unsigned int n);

int 	main(void)
{
	char s1[] = "Hello";
	char s2[] = "HelmU";

	printf("%s\n%s\n", s1, s2);	
	printf("%d", ft_strncmp(s1, s2, 4));	
}


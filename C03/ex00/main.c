#include <stdio.h>

int	ft_strcmp(char *s1,char *s2);

int 	main(void)
{
	char s1[] = "Hello";
	char s2[] = "Hfla";
	printf("%s\n%s\n", s1, s2);	
	printf("%d", ft_strcmp(s1, s2));	
}

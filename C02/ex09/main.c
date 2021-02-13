#include <stdio.h>

char	*ft_strcapitalize(char *str);
char	*ft_strlowcase(char *str);

int	main(void)
{
	char str[] = "couCOu 1lEs Filles, ca Va ? tres+bien";

	printf("%s", ft_strcapitalize(str));
	return (0);
}

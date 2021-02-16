#include <stdio.h>
#include <string.h>

char	*ft_strstr(char *str,char *to_find);

int	main(void)
{
	char str[] = "Salut les nazes";
	char to_find[] = "12";

	printf("%s\n", strstr(str, to_find));
	printf("%s\n", ft_strstr(str, to_find));
	return (0);
}

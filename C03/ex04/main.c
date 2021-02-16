#include <stdio.h>
#include <string.h>

char	*ft_strstr(char *str,char *to_find);
int	ft_strlen(char *str);

int	main(void)
{
	char str[] = "Salut les nazes";
	char to_find[] = "le";

	//printf("%s\n", strstr(str, to_find));
	printf("%s\n", ft_strstr(str, to_find));
	printf("%d", ft_strlen(to_find));
	return (0);
}

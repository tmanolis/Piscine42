#include <string.h>
#include <stdio.h>

char	*ft_strcpy(char *dest,char *src);

int	main(void)
{
	char dest[] = "Oui";
	char src[] = "Non Non Non";

		{
		char dest[20] = "Coucou";
		char src[20] = "OK";

		strcpy(dest, src);
		printf("%s\n%s\n", dest, src);
		}

	printf("%s\n%s\n", dest, src);
	ft_strcpy(dest, src);
	printf("%s\n%s\n", dest, src);
	return (0);
}

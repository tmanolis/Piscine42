#include <stdlib.h>
#include <stdio.h>

int	ft_strlen(char *str)
{
	int i;
	
	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char *ft_strdup(char *src)
{
	int i;
	int len;
	char *dest;

	i = 0;	
	len = ft_strlen(src);
	dest = malloc(sizeof(char) * len);
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

int	main(void)
{
	char *ptr;
	char src[] = "Salut les amis";
	
	ptr = ft_strdup(src);
	printf("%s", ptr);
	free(ptr);
	return(0);
}

#include <stdlib.h>
#include <stdio.h>

char *ft_strjoin(int size, char **strs, char *sep);

int	main(int argc, char **argv)
{
	char sep[] = "espace";
	char *tab;

	tab = NULL;	
	if (argc > 0)
	{
		tab = ft_strjoin(argc, argv, sep);
		printf("%s", tab);
	}
	free(tab);
	return (0);
}

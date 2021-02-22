#include <stdio.h>
#include <stdlib.h>

int	*ft_range(int min, int max);

int main(void)
{
	int *tab;
	int j;

	j = 0;
	tab = ft_range(32, 60);
	while (j < 60 - 32)
	{
		printf("%d ", tab[j]);
		j++;
	}
	free(tab);
	return (0);
}

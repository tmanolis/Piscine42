#include <stdlib.h>
#include <stdio.h>

int ft_ultimate_range(int **range, int min, int max);

int	main(void)
{
	int i;
	int *ptr = NULL;

	i = 0;
	printf("%d\n", ft_ultimate_range(&ptr, 15, 25));
	while (i < 25 - 15)
	{
		printf("%d ", ptr[i]);
		i++;
	}
	free (ptr);
	return (0);
}

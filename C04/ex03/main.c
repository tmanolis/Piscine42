#include <stdio.h>
#include <stdlib.h>

int	ft_atoi(char *str);

int	main(void)
{
	printf("%d\n", ft_atoi(" ---+--+1234  567"));
	//printf("%d", atoi("-1234  567"));
	return (0);
}

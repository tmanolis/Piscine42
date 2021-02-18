int ft_iterative_factorial(int nb)
{
	int i;
	
	i = nb - 1;
	if (nb < 0 || nb > 12)
		return (0);
	else if (nb ==  1)
		return (1);
	while (i > 0)
	{
		nb = nb * i;
		i--;
	}
	return (nb);
}

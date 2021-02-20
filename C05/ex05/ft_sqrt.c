int ft_sqrt(int nb)
{
	int i;

	i = 2;
	if (nb == 0)
		return (0);
	else if (nb == 1)
		return (1);
	while (i * i <= nb)
	{
		if (i * i == nb)
			return (i);
		i++;
	}
	return (0);
}

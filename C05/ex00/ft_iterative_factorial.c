int ft_iterative_factorial(int nb)
{
	int resultat;
	int i;
	
	i = 1;
	resultat = 1;
	if (nb < 0 || nb > 12)
		return (0);
	else if (nb ==  1)
		return (1);
	while (i <= nb)
	{
		resultat = resultat * i;
		i++;
	}
	return (resultat);
}

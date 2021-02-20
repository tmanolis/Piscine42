int ft_iterative_power(int nb,int power)
{
	int i;
	int valeur;

	i = 1;
	valeur = nb;
	if (power < 0)
		return (0);
	else if (power == 0)
		return (1);
	else if(power == 1)
		return (nb);
	else if (nb > 14 && power > 7)
		return (0);
	while (i < power)
	{
		valeur = valeur * nb;
		i++;
	}
	return (valeur);
}

int	ft_recursive_factorial(int nb)
{
	if (nb < 0 || nb > 12)
		return (0);
	else if (nb == 1)
		return (1);	
	else
		return (nb * ft_recursive_factorial(nb - 1));
}

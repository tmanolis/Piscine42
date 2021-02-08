void	ft_ultimate_div_mod(int *a, int *b)
{
	int c;
	int d;

	c  = *a / *b;
	d = *a % *b;
	*a = c;
	*b = d;
}

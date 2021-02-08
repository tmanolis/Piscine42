#include <unistd.h>

void	ft_div_mod(int a,int b,int *div,int *mod);

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
	}
	else if (nb >= 0 && nb < 10)
	{
		ft_putchar(nb + '0');
	}

	else if (nb < 0)
	{
		ft_putchar('-');
		ft_putnbr(nb * -1);
	}

	else if (nb > 0)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}

}

int	main(void)
{
	int a;
	int b;
	int div;
	int mod;

	a = 13;
	b = 5;

	ft_putnbr(a);
	ft_putchar(' ');
	ft_putnbr(b);
	ft_putchar(',');
	ft_putchar('\n');
	ft_div_mod(a, b, &div, &mod);
	ft_putnbr(div);
	ft_putchar(' ');
	ft_putnbr(mod);
	return (0);
	
}

#include <unistd.h>

int	ft_strlen(char *str);

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb >= 0 && nb < 10)
	{
		ft_putchar(nb + '0');
	}
	else if (nb > 0)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
}

int main(void)
{
	ft_strlen("Coucou les copains !");
	ft_putnbr(ft_strlen("Coucou les copains !"));
	return (0);
}

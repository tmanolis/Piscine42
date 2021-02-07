/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmanolis <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/07 14:39:24 by tmanolis          #+#    #+#             */
/*   Updated: 2021/02/07 16:53:14 by tmanolis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb > 0 && nb <= 9)
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
		ft_putchar(nb / 10 + '0');
		ft_putchar(nb % 10 + '0');
	}

}

int		main(void)
{
	int a;
	a = 42;
	
	ft_putnbr(a);
	return (0);
}

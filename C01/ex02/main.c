/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmanolis <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/08 16:02:56 by tmanolis          #+#    #+#             */
/*   Updated: 2021/02/08 17:24:37 by tmanolis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

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

void ft_swap(int *a, int *b);

int		main (void)
{
	int a;
	int b;

	a = 10;
	b = 20;
	ft_swap(&a, &b);
	ft_putnbr(a);
	ft_putchar('\n');
	ft_putnbr(b);
	return (0);	
}

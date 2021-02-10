/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmanolis <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/10 11:43:13 by tmanolis          #+#    #+#             */
/*   Updated: 2021/02/10 17:21:57 by tmanolis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size);

int		main(void)
{

	int size;
	int tab[5];
	int p;

	tab[0] = 10;
	tab[1] = 2;
	tab[2] = 30;
	tab[3] = 4;
	tab[4] = 5;
	size = 5;
	p = 0;
	while (p < size)
	{
		printf("%d", tab[p]);
		p++;
	}
	ft_rev_int_tab(tab, size);
	printf("\n");
	p = 0;
	while (p < size)
	{
		printf("%d", tab[p]);
		p++;
	}
	return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmanolis <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/10 13:06:54 by tmanolis          #+#    #+#             */
/*   Updated: 2021/02/10 17:21:59 by tmanolis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int i;
	int cache;

	i = 0;
	while (tab[i] < tab[size / 2])
	{
		cache = tab[i];
		tab[i] = tab[size - 1 - i];
		tab[size - 1 - i] = cache;
		i++;
	}

}

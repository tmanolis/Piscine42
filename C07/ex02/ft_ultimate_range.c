/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmanolis <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/22 15:14:11 by tmanolis          #+#    #+#             */
/*   Updated: 2021/02/22 17:16:00 by tmanolis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int ft_ultimate_range(int **range, int min, int max)
{
	int i;
	int len;
	int *tab;

	if (min >= max)
	{
		range = NULL;

		return (0);
	}
	len = max - min;
	if (!(tab = malloc(sizeof(*tab) * len)))
		return (-1);
	i = 0;
	while (i < len)
	{
		tab[i] = min;
		i++;
		min++;
	}
	*range = tab;
	return (i);
}

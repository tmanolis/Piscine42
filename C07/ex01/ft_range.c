/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmanolis <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/22 13:20:41 by tmanolis          #+#    #+#             */
/*   Updated: 2021/02/22 15:12:27 by tmanolis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*tab;
	int	len;
	int i;

	if (min >= max)
	{
		tab = NULL;
		return (tab);
	}
	len = (max - min);
	if (!(tab = malloc(sizeof(*tab) * len)))
		return (NULL);
	i = 0;
	while (i < len)
	{
		tab[i] = min;
		i++;
		min++;
	}
	return (tab);
}

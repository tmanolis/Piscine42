/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmanolis <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/23 09:18:33 by tmanolis          #+#    #+#             */
/*   Updated: 2021/02/23 13:53:27 by tmanolis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int	ft_size_arrays(int size, char **strs, char *sep)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (i < size)
	{
		j = j + ft_strlen(strs[i]);
		i++;
	}
	j = j + (ft_strlen(sep) * (i - 1)) + 1;
	return (j);
}

char *ft_strcat(char *dest, char *src)
{
	int i;
	int j;

	i = ft_strlen(dest);
	j = 0;
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}

char *ft_strjoin(int size, char **strs, char *sep)
{
	int i;
	int len;
	char *tab;

	if (size == 0)
	{
		tab = malloc(sizeof(*tab));
			*tab = 0;
			return (tab);
	}
	len = ft_size_arrays(size, strs, sep);
	if (!(tab = malloc(sizeof(*tab) * len)))
		return (NULL);
	*tab = 0;
	i = 0;
	while (i < size)
	{
		ft_strcat(tab, strs[i]);
		if (i < size -1)
			ft_strcat(tab, sep);
		i++;	
	}
	tab[len - 1] = '\0';
	return (tab);
}

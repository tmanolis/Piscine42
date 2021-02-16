/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmanolis <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/16 13:01:16 by tmanolis          #+#    #+#             */
/*   Updated: 2021/02/16 13:02:17 by tmanolis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int				ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int i;
	unsigned int j;
	unsigned int cache;

	i = ft_strlen(dest);
	j = 0;
	cache = ft_strlen(dest);
	if (dest[0] == '\0' || size == 0)
		return (ft_strlen(src));
	while (src[j] != '\0' && j < size)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	i = 0;
	while (src[i] != '\0')
	{
		i++;
	}
	if (size < cache)
		return (cache - (cache - size) + i);
	else
		return (cache + i);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmanolis <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/13 11:45:49 by tmanolis          #+#    #+#             */
/*   Updated: 2021/02/13 11:48:19 by tmanolis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, char *src)
{
	int i;

	i = 0;
	while (src[0 + i] != '\0')
	{
		dest[0 + i] = src[0 + i];
		i++;
	}
	dest[0 + i] = '\0';
	return (dest);
}

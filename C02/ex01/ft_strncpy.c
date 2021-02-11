/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmanolis <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/11 10:13:44 by tmanolis          #+#    #+#             */
/*   Updated: 2021/02/11 12:39:40 by tmanolis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char *ft_strncpy(char *dest, char *src, unsigned int n)
{

	//utilise strlen
	unsigned int i;

	i = 0;

	while (i < n) //utilise strlen pour lui dire ou s'arreter
		{
			dest[i] = src[i];
			i++;
		}
	while (dest[i] != '\0')
	{
		dest[i] = '\0';
		i++;
	}
	return(dest);
}

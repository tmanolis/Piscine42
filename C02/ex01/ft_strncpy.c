/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmanolis <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/11 10:13:44 by tmanolis          #+#    #+#             */
/*   Updated: 2021/02/11 17:21:08 by tmanolis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	 *ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	i = 0;

	while (i < n && src[i] != '\0')
		{
			dest[i] = src[i];
			i++;
		}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return(dest);
}

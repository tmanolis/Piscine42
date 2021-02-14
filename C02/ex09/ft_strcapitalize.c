/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmanolis <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/13 12:14:13 by tmanolis          #+#    #+#             */
/*   Updated: 2021/02/14 10:36:47 by tmanolis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] > 64 && str[i] < 91)
		{
			str[i] = str[i] + 32;
		}
		i++;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int i;

	i = 0;
	ft_strlowcase(str);
	while (str[i] != '\0')
	{
		if (i == 0 && (str[i] > 96 && str[i] < 123))
		{
			str[i] = str[i] - 32;
		}
		else if ((str[i - 1] < 65 || (str[i - 1] > 90 && str[i - 1] < 97)
				|| str[i - 1] > 122)
				&& (str[i] > 96 && str[i] < 123))
		{
			str[i] = str[i] - 32;
		}
		i++;
	}
	return (str);
}

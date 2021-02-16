/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmanolis <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/16 14:42:40 by tmanolis          #+#    #+#             */
/*   Updated: 2021/02/16 14:46:13 by tmanolis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int i;
	int j;
	int valeur;

	i = 0;
	j = 0;
	valeur = 0;
	while (str[i] == 43 || str[i] == 45 || str[i] == 32 
	|| (str[i] > 8 && str[i] < 14))
	{
		if (str[i] == 45)
			j++;
		i++;
	}
	while (str[i] > 47 && str[i] < 58)
	{
		valeur = (valeur * 10) + str[i] - 48;
		i++;
	}
	if ((j % 2) == 1)
		return (valeur * -1);
	else
		return (valeur);	
}


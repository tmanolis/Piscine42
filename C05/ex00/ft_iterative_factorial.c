/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmanolis <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/22 10:12:18 by tmanolis          #+#    #+#             */
/*   Updated: 2021/02/22 12:07:03 by tmanolis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int i;

	i = nb - 1;
	if (nb < 0 || nb > 12)
		return (0);
	else if (nb == 1 || nb == 0)
		return (1);
	while (i > 0)
	{
		nb = nb * i;
		i--;
	}
	return (nb);
}

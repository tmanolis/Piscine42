/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmanolis <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/17 10:07:59 by tmanolis          #+#    #+#             */
/*   Updated: 2021/02/17 17:27:31 by tmanolis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	while (*str != '\0')
	{
		write(1, str, 1);
		str++;
	}
}

int		main(int argc, char **argv)
{
	int i;
	
	i = argc - 1;
	while (argv[i])
	{
		ft_putstr(argv[i]);
		write (1, "\n", 1);
		i--;
	}
	return(0);
}

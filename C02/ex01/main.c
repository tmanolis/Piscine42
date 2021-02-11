/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmanolis <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/11 10:08:33 by tmanolis          #+#    #+#             */
/*   Updated: 2021/02/11 17:22:26 by tmanolis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char *ft_strncpy(char *dest, char *src, unsigned int n);

int		main(void)
{
	char dest[] = "Hel";
	char src[] = "OKAY";
	unsigned int n;

	n = 5;

	printf("%s\n%s\n\n", dest, src);
	ft_strncpy(dest, src, n);
	printf("%s", dest);
	return (0);
}

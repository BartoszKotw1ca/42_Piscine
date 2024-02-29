/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkotwica <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/03 16:54:02 by bkotwica          #+#    #+#             */
/*   Updated: 2023/12/03 16:58:26 by bkotwica         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_atoi(char *str)
{
	int	i;
	int	nbr;
	int	min;

	nbr = 0;
	i = 0;
	min = 1;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
	{
		i ++;
	}
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			min *= -1;
		i ++;
	}
	while (str[i] >= 48 && str[i] <= 57)
	{
		nbr = 10 * nbr + str[i] - '0';
		i ++;
	}
	return (min * nbr);
}
/*
#include <stdio.h>
int	main(void)
{
	char str[] = "  	---+++++- 1a23";
	printf("%d", ft_atoi(str));
}
*/

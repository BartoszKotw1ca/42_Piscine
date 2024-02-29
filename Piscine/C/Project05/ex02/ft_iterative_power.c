/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkotwica <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 14:53:59 by bkotwica          #+#    #+#             */
/*   Updated: 2023/12/04 14:57:08 by bkotwica         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_iterative_power(int nb, int power)
{
	int	result;

	if (power >= 0)
	{
		result = 1;
		while (power > 0)
		{
			result *= nb;
			power --;
		}
		return (result);
	}
	return (0);
}
/*
#include <stdio.h>
int	main(void)
{
	printf("%d", ft_iterative_power(0, -1));
}
*/

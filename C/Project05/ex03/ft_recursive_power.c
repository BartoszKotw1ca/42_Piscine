/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkotwica <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 15:01:40 by bkotwica          #+#    #+#             */
/*   Updated: 2023/12/04 15:02:52 by bkotwica         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_recursive_power(int nb, int power)
{
	int	result;

	if (power >= 0)
	{
		result = 1;
		if (power > 0)
			result *= nb * ft_recursive_power(nb, power - 1);
		return (result);
	}
	return (0);
}
/*
#include <stdio.h>
int main(void)
{
	printf("%d", ft_recursive_power(0, 100));
}
*/

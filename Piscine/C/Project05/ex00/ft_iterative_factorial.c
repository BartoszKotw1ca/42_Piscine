/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkotwica <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 12:38:20 by bkotwica          #+#    #+#             */
/*   Updated: 2023/12/05 18:12:05 by bkotwica         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_iterative_factorial(int nb)
{
	int	result;

	if (nb >= 0)
	{
		result = 1;
		while (nb > 1)
		{
			result *= nb;
			nb --;
		}
		return (result);
	}
	return (0);
}
/*
#include <stdio.h>
int	main(void)
{
	//printf("%d", av[1][0] - '0');
	printf("%d", ft_iterative_factorial(0));
}
*/

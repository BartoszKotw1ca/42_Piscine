/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkotwica <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 14:45:44 by bkotwica          #+#    #+#             */
/*   Updated: 2023/12/04 14:48:05 by bkotwica         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_recursive_factorial(int nb)
{
	int	result;

	if (nb >= 0)
	{
		result = 1;
		if (nb > 1)
			result *= nb * ft_recursive_factorial(nb -1);
		return (result);
	}
	return (0);
}
/*
#include <stdio.h>
int	main(void)
{
	printf("%d", ft_recursive_factorial(-1));
}
*/

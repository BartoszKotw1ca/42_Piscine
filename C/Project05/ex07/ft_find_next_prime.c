/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkotwica <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 08:40:07 by bkotwica          #+#    #+#             */
/*   Updated: 2023/12/05 08:49:49 by bkotwica         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_is_prime(int nb)
{
	int	i;

	i = 2;
	while (i <= (nb / 2))
	{
		if (nb % i == 0)
			return (0);
		i ++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	int	i;
	
	i = nb;
	if (nb <= 1)
		return (2);
	while (!ft_is_prime(i))
		i ++;
	return (i);
}
/*
#include <stdio.h>
int	main(void)
{
	printf("%d", ft_find_next_prise(1));
}
*/

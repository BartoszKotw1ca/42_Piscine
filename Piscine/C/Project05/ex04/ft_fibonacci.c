/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkotwica <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 15:10:58 by bkotwica          #+#    #+#             */
/*   Updated: 2023/12/04 15:13:11 by bkotwica         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_fibonacci(int n)
{
	if (n == 0)
		return (0);
	if (n == 1)
		return (1);
	if (n <= 1)
		return (-1);
	return (ft_fibonacci(n - 1) + ft_fibonacci(n - 2));
}
/*
#include <stdio.h>
int	main(void)
{
	printf("%d", ft_fibonacci(0));
}
*/

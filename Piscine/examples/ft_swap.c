/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkotwica <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/08 11:38:04 by bkotwica          #+#    #+#             */
/*   Updated: 2023/12/08 11:42:50 by bkotwica         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
#include <stdio.h>
int	main(void)
{
	int a = 10;
	int b = 11;
	ft_swap(&a, &b);
	printf("%d %d", a, b);
}

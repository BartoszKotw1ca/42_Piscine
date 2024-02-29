/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkotwica <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 14:24:11 by bkotwica          #+#    #+#             */
/*   Updated: 2023/11/23 14:54:55 by bkotwica         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <unistd.h>
void	ft_ultimate_div_mod(int *a, int *b)
{
	*a = *a / *b;
	*b = *a % *b;
}

int	main(void)
{
	int a;
	int b;

	a = 100;
	b = 11;
	ft_ultimate_div_mod(&a, &b);
	printf("%d", a);
	
	return 1;
}

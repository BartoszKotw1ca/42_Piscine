/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rrange.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angavrel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/06 15:46:02 by angavrel          #+#    #+#             */
/*   Updated: 2016/12/21 12:52:42 by angavrel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <stdlib.h>

int     *ft_rrange(int start, int end)
{
	int	*r;
	int	len;

	len = (end >= start) ? end - start + 1 : start - end + 1;
	if (!(r = (int*)malloc(sizeof(int) * len)))
		return (NULL);
	 while (len--)
		 r[len] = (end >= start) ? end-- : end++;
	return (r);
}

#include <stdio.h>
int	main(void)
{
	int	i = 0;
	int	*c = ft_rrange(-1, 2);
	while (i < 3)
	{
		printf("%d\n", *(c + i));
		i ++;
	}
	printf("%d", 5 << 10);
}
*/
#include <unistd.h>
#include <stdio.h>
void print_bits(unsigned char octet)
{
	int	i;
	unsigned char bit;

	i = 8;
	while (i --)
	{
		bit = ((octet >> i) & 1) + '0';
		write(1, &bit, 1);
	}
	while (i --)
	{
		bit = ((octet >> i) & 1) + '0';
		write(1, &bit, 1);
	}
}

void	reverse_bit(unsigned char octet)
{
	
}

int	main(void)
{
	print_bits(38);
	reverse_bit(38);
	//printf("\n%d\n", 5 << 1);
	//print_bits(10);
}

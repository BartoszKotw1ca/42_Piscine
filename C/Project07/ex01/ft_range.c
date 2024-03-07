/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkotwica <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 12:39:15 by bkotwica          #+#    #+#             */
/*   Updated: 2023/12/12 12:41:18 by bkotwica         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int		*res;
	int		len;
	int		i;

	i = 0;
	len = max - min;
	res = (int *)malloc(len * sizeof(int));
	if (!res || max <= min)
		return (0);
	while (i < len)
	{
		res[i] = min;
		i ++;
		min ++;
	}
	return (res);
}
/*
int	main(void)
{
	int	*n = ft_range(5, 5);
	//ft_range(-1, 5);
	printf("%d", *(n));
	free(n);
}
*/

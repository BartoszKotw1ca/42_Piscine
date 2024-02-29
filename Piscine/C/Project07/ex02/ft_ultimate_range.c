/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkotwica <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 21:25:17 by bkotwica          #+#    #+#             */
/*   Updated: 2023/12/13 10:48:53 by bkotwica         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	len;

	len = max - min;
	if (len <= 0)
		return (0);
	*range = (int *)malloc(len * sizeof(int *));
	if (!(*range))
		return (0);
	while (min < max)
		*(*range)++ = min ++;
	*range -= len;
	return (len);
}
/*
int	main(void)
{
	int	*range;
	printf("%d\n", ft_ultimate_range(&range, -100, 4));
	int	i = -1;
	while (i ++ < 150)
		printf("%d", range[i]);
	free(range);
}
*/

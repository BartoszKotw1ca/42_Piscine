/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkotwica <bartekbkotwica@gmai.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/26 11:36:39 by bkotwica          #+#    #+#             */
/*   Updated: 2023/11/26 15:22:43 by bkotwica         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;

	i = 0;
	while (i < size)
	{
		j = 0;
		while (j < size - i - 1)
		{
			if (tab[j] > tab[j + 1])
			{
				ft_swap(&tab[j], &tab[j + 1]);
			}
			j ++;
		}
		i ++;
	}
}

#include <stdio.h>
int	main(void)
{
	int i = 0;
	int	arr[] = {420, 2137, 69, 455, 80085};
	ft_sort_int_tab(arr, 5);
	while(arr[i])
	{
		printf("%d,", arr[i]);
		i++;
	}
	return (0);
}

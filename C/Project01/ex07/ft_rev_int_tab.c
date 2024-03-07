/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkotwica <bartekbkotwica@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/25 11:56:04 by bkotwica          #+#    #+#             */
/*   Updated: 2023/11/26 11:20:44 by bkotwica         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	el;
	int	tem;
	int	times;

	el = 0;
	if (size % 2 == 0)
	{
		times = size / 2;
	}
	else
	{
		times = (size - 1) / 2;
	}
	while (times > 0)
	{
		tem = tab[el];
		tab[el] = tab[size - 1];
		tab[size - 1] = tem;
		el ++;
		times --;
		size --;
	}
}

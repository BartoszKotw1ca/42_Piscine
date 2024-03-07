/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkotwica <bartekbkotwica@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 19:55:29 by bkotwica          #+#    #+#             */
/*   Updated: 2023/11/24 19:59:38 by bkotwica         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	print(char t, char s, char d, char j)
{
	write(1, &t, 1);
	write(1, &s, 1);
	write(1, " ", 1);
	write(1, &d, 1);
	write(1, &j, 1);
	write(1, ", ", 2);
}

void	ft_print_comb2(void)
{
	char	t;
	char	s;
	char	d;
	char	j;

	t = '0';
	while (t <= '9')
	{
		s = '0';
		while (s <= '9')
		{
			d = '0';
			while (d <= '9')
			{
				j = '0';
				while (j <= '9')
				{					
					print(t, s, d, j);
					j++;
				}
				d++;
			}
			s++;
		}
		t++;
	}
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkotwica <bartekbkotwica@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 20:01:33 by bkotwica          #+#    #+#             */
/*   Updated: 2023/11/22 21:41:18 by bkotwica         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	print(char j, char d, char s)
{
	write(1, &j, 1);
	write(1, &d, 1);
	write(1, &s, 1);
}

void	ft_print_comb(void)
{
	char	j;
	char	d;
	char	s;

	j = '0';
	while (j <= '9')
	{
		d = j + 1;
		while (d <= '9')
		{
			s = d + 1;
			while (s <= '9')
			{
				print (j, d, s);
				if (j != '7' || d != '8' || s != '9')
				{
					write(1, ", ", 2);
				}
				s++;
			}
			d++;
		}
		j++;
	}
}

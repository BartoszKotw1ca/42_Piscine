/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   last_word.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkotwica <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 13:50:49 by bkotwica          #+#    #+#             */
/*   Updated: 2023/12/07 13:51:04 by bkotwica         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdio.h>

int	length(char *str)
{
	int	i;
	
	i = 0;
	while (str[i])
	{
		i ++;
	}
	return (i);
}



int	main(int ac, char **av)
{
	int	len;
	
	len = length(av[1]);
	if (ac == 2)
	{
	
		while (av[1][len - 1] == 32 || av[1][len - 1] == 9)
			len --;
		while ((!(av[1][len - 1] == 32 || av[1][len - 1] == 9)) && len - 1 > 0)
		{
			len --;
		}
		len ++;
		while (av[1][len - 1] && (!(av[1][len - 1] == 32 || av[1][len - 1] == 9)))
		{
			write(1, &av[1][len - 1], 1);
			len ++;
		}
	}
}

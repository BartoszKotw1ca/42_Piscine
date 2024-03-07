/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkotwica <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 15:58:20 by bkotwica          #+#    #+#             */
/*   Updated: 2023/12/07 08:49:51 by bkotwica         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_swap(char **a, char **b)
{
	char	*temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

int	ft_length(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i ++;
	}
	return (i);
}

void	print(int ac, char **av)
{
	int	i;
	int	len;

	i = 1;
	while (i < ac)
	{
		len = ft_length(av[i]);
		write(1, av[i], len);
		write(1, "\n", 1);
		i++;
	}
}

int	main(int ac, char **av)
{
	int	i;
	int	j;
	int	s;

	i = 0;
	while (i < ac)
	{
		j = 1;
		s = 0;
		while (j < ac - i - 1)
		{
			if (av[j][s] > av[j + 1][s] ||
			ft_length(av[j]) > ft_length(av[j + 1]))
				ft_swap(&av[j], &av[j + 1]);
			j ++;
			s ++;
		}
		i ++;
	}
	print(ac, av);
	return (0);
}

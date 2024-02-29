/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   atoi.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkotwica <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 11:06:49 by bkotwica          #+#    #+#             */
/*   Updated: 2023/12/07 11:15:02 by bkotwica         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_atoi(const char *str)
{
	int	nbr;
	int	i;
	int	sign;
	
	i = 0;
	sign = 1;
	nbr = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == ' ')
		i ++;
	if (str[i] == '-' || str[i] == '+')	
	{
		if (str[i] == '-')
			sign *= -1;
		i ++;
	}
	while (str[i] >= 48 && str[i] <= 57)
		nbr = 10 * nbr + str[i ++] - '0';
	return (sign * nbr);
}

#include <stdio.h>
int main(void)
{

	printf("%d", ft_atoi("1233"));
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkotwica <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 20:52:14 by bkotwica          #+#    #+#             */
/*   Updated: 2023/11/27 21:27:02 by bkotwica         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int	ft_str_is_alpha(char *str)
{
	while (*str != '\0')
	{
		if (!((*str >= 65 && *str <= 90) || (*str >= 97 && *str <= 122)))
		{
			return (0);
		}
		else
		{
			str ++;
		}
	}
	return (1);
}

/*
#include <stdio.h>
int	main(void)
{
	char string[11] = "";
	ft_str_is_alpha(&string[0]);
	int c = ft_str_is_alpha(&string[0]);
	printf("%d", c);
}
*/

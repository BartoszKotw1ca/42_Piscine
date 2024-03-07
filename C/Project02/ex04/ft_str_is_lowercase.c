/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkotwica <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 21:49:44 by bkotwica          #+#    #+#             */
/*   Updated: 2023/11/27 22:32:59 by bkotwica         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int	ft_str_is_lowercase(char *str)
{
	while (*str != '\0')
	{
		if (!(*str >= 97 && *str <= 122))
		{
			return (0);
		}
		str ++;
	}
	return (1);
}
/*
#include <stdio.h>
int	main()
{
	char string[10] = "";
	int c = ft_str_is_lowercase(&string[0]);
	printf("%d", c); 
}
*/

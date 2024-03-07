/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkotwica <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 22:34:49 by bkotwica          #+#    #+#             */
/*   Updated: 2023/11/27 22:46:44 by bkotwica         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_str_is_uppercase(char *str)
{
	while (*str != '\0')
	{
		if (!(*str >= 65 && *str <= 90))
		{
			return (0);
		}
		str ++;
	}
	return (1);
}
/*
#include <stdio.h>
int	main(void)
{
	char string[10] = "";
	int c = ft_str_is_uppercase(&string[0]);
	printf("%d", c);
}
*/

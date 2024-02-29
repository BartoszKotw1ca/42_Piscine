/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkotwica <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 22:49:13 by bkotwica          #+#    #+#             */
/*   Updated: 2023/11/27 22:55:45 by bkotwica         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_str_is_printable(char *str)
{
	while (*str != '\0')
	{
		if (!(*str >= 32 && *str <= 126))
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
	char string[] = "";
	int c = ft_str_is_printable(&string[0]);
	printf("%d", c);	
}
*/

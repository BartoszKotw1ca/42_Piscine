/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkotwica <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 21:40:04 by bkotwica          #+#    #+#             */
/*   Updated: 2023/11/27 21:40:47 by bkotwica         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int	ft_str_is_numeric(char *str)
{
	while (*str != '\0')
	{
		if (!(*str >= 48 && *str <= 57))
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
	ft_str_is_numeric(&string[0]);
	int ans = ft_str_is_numeric(&string[0]);
	printf("%d", ans);
}
*/

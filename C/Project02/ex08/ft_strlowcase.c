/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkotwica <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 15:35:57 by bkotwica          #+#    #+#             */
/*   Updated: 2023/11/29 15:37:35 by bkotwica         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strlowcase(char *str)
{
	char	*original;

	original = str;
	while (*str != '\0')
	{
		if (*str >= 65 && *str <= 90)
		{
			*str += 32;
		}
		str ++;
	}
	return (original);
}
/*
#include <stdio.h>

int	main(void)
{	
	char string[] = "";
	char *c = ft_strlowcase(&string[0]);
	printf("%s", c);
}
*/

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkotwica <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 22:59:15 by bkotwica          #+#    #+#             */
/*   Updated: 2023/11/27 23:37:48 by bkotwica         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strupcase(char *str)
{
	char	*original;

	original = str;
	while (*str != '\0')
	{
		if (*str >= 'a' && *str <= 'z')
		{
			*str -= 32;
		}
		str ++;
	}
	return (original);
}
/*
#include <stdio.h>

int	main(void)
{
	char string[] = "bsad,fk dsf";
	char * c = ft_strupcase(&string[0]);
	printf("%s", c);
	//char str1[] = "";
	//str1[0] = 'a';
	//printf("%s", str1);
}
*/

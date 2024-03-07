/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkotwica <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 18:48:08 by bkotwica          #+#    #+#             */
/*   Updated: 2023/11/29 17:10:00 by bkotwica         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	char	*original;

	original = dest;
	while (*src != '\0' && n > 0)
	{
		*dest ++ = *src ++;
		n --;
	}
	while (n > 0)
	{
		*dest ++ = '\0';
		n --;
	}
	return (original);
}
/*
#include <stdio.h>
int	main(void)
{
	char string[] = "Hello";
	char dest[6];
	printf("%s", ft_strncpy(dest, string, 3));
}
*/

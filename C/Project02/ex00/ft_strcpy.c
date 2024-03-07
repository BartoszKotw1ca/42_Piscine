/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkotwica <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 15:52:36 by bkotwica          #+#    #+#             */
/*   Updated: 2023/11/27 16:34:30 by bkotwica         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

char	*ft_strcpy(char *dest, char *src)
{
	char	*original;

	original = dest;
	while (*src != '\0')
	{
		*dest = *src;
		src ++;
		dest ++;
	}
	*dest = '\0';
	return (original);
}
/*
#include <stdio.h>
int	main(void)
{
	char src[6] = "asdfgdsdf";
	char dest[6];
	printf("%s", ft_strcpy(&dest[0], &src[0]));
}
*/

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkotwica <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 13:41:24 by bkotwica          #+#    #+#             */
/*   Updated: 2023/11/30 13:56:51 by bkotwica         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	int	i;
	int	j;	

	i = 0;
	j = 0;
	while (dest[i] != '\0')
	{
		i ++;
	}
	while (src[j] != '\0' && nb > 0)
	{
		dest[i] = src[j];
		j ++;
		i ++;
		nb --;
	}
	dest[i] = '\0';
	return (dest);
}
/*

#include <stdio.h>

int	main(void)
{
	char	dest[4] = "abc";
	char	src[] = "d e f";
	ft_strncat(dest, src, 2);
	printf("%s", &dest[0]);
}
*/

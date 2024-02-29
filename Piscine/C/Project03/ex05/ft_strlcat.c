/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkotwica <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/02 10:03:56 by bkotwica          #+#    #+#             */
/*   Updated: 2023/12/02 12:04:11 by bkotwica         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	length(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i ++;
	}
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	lend;
	unsigned int	i;
	unsigned int	lens;

	i = 0;
	lens = length(src);
	lend = length(dest);
	if (size == 0 || size <= lend)
		return (lens + size);
	while (src[i] && lend < size - 1 && lend + i < size - 1)
	{
		dest[lend + i] = src[i];
		i ++;
	}
	dest[lend + i] = '\0';
	return (lend + lens);
}
/*
#include <stdio.h>
int	main(void)
{
	char src[] = "bakls";
	char dest[100] = "wikre";
	unsigned int wynikstrl = ft_strlcat(dest, src, 800);
	printf("%s, %u", dest, wynikstrl);
}
*/

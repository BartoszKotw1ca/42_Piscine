/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkotwica <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 20:28:55 by bkotwica          #+#    #+#             */
/*   Updated: 2023/11/29 20:45:44 by bkotwica         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	while (n > 0 && (*s1 != '\0' || *s2 != '\0'))
	{
		if (*s1 > *s2)
		{
			return (1);
		}
		else if (*s1 < *s2)
		{
			return (-1);
		}
		s1 ++;
		s2 ++;
		n --;
	}
	return (0);
}
/*
#include <stdio.h>

int	main(void)
{
	char string1[] = "abcdf1";
	char string2[] = "abcdf";
	int c = ft_strncmp(string1, string2, 1);
	printf("%d", c);	
}
*/

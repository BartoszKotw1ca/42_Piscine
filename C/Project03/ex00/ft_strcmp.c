/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkotwica <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 19:55:57 by bkotwica          #+#    #+#             */
/*   Updated: 2023/11/29 19:57:11 by bkotwica         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 != '\0' || *s2 != '\0')
	{
		if (*s1 != *s2)
		{
			return (*s1 - *s2);
		}
		s1 ++;
		s2 ++;
	}
	return (0);
}
/*
#include <stdio.h>

int	main(void)
{
	char string1[] = "abc 1";
	char string2[] = "abcdk";
	int c = ft_strcmp(string1, string2);
	printf("%d", c);	
}
*/

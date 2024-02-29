/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkotwica <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/09 11:13:09 by bkotwica          #+#    #+#             */
/*   Updated: 2023/12/09 11:15:54 by bkotwica         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	int		len;
	int		i;
	char	*org;

	i = 0;
	len = 0;
	while (src[len])
		len ++;
	org = (char *)malloc((len + 1) * sizeof(char));
	if (!org)
		exit (0);
	while (*src)
	{
		org[i] = *src;
		src ++;
		i ++;
	}
	org[i] = '\0';
	return (org);
}
/*
#include <string.h>
#include <stdio.h>
int	main(void)
{
	char	str[] = "asdfa";
	char	*nor = strdup(str);
	char	*my = ft_strdup(str);
	printf("This is strdup: %s\n", nor);
	printf("This is ft_strdup: %s", my); 
	free(my);
	free(nor);
}*/

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkotwica <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 12:06:44 by bkotwica          #+#    #+#             */
/*   Updated: 2023/12/13 12:07:20 by bkotwica         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char 	d[1];
	return (*strs);
}

int	main(void)
{
	int	size = 3;
	char	*strs[] = {"iglo", "ma", "macka"};
	char	*sep = " ";
	printf("%s", (ft_strjoin(size, strs, sep)));
}

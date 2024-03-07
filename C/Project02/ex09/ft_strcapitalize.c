/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkotwica <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 08:47:03 by bkotwica          #+#    #+#             */
/*   Updated: 2023/12/04 08:49:57 by bkotwica         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (i == 0 && (str[0] >= 97 && str[0] <= 122))
			str[0] -= 32;
		if (str[i + 1] >= 65 && str[i + 1] <= 90)
			str[i + 1] += 32;
		if ((str[i] < 48 || str[i] > 122)
			&& (str[i + 1] >= 97 && str[i + 1] <= 122))
			str[i + 1] -= 32;
		if ((str[i] >= 58 && str[i] <= 64)
			&& (str[i + 1] >= 97 && str[i + 1] <= 122))
			str[i + 1] -= 32;
		if ((str[i] >= 91 && str[i] <= 96)
			&& (str[i + 1] >= 97 && str[i + 1] <= 122))
			str[i + 1] -= 32;
		i ++;
	}
	return (str);
}
/*
#include <stdio.h>

int	main(void)
{
	char str[] = "sNLut,CoasdDMent au zas ? 42.MO";
	char str1[] = "\nt.s q'u;[ a[	r]ante- 	deux; cinq:uante+et+un";
	printf("%s", ft_strcapitalize(str));
	printf("%s", ft_strcapitalize(str1));
}
*/

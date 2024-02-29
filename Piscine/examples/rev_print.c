/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_print.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkotwica <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/08 11:43:25 by bkotwica          #+#    #+#             */
/*   Updated: 2023/12/08 12:01:56 by bkotwica         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_rev_print(char *str)
{
	int	len;
	int	j;
	char	temp;

	j = 0;
	len = 0;
	while (str[len])
		len ++;
	while (j < len)
	{
		temp = str[j];
		str[j] = str[len - 1];
		str[len - 1] = temp;
		j ++;
		len --;
	}
	return (str);
}

int	main(void)
{
	char str[] = "bak";
	printf("%s", ft_rev_print(&str[0]));
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkotwica <bartekbkotwica@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 16:50:00 by bkotwica          #+#    #+#             */
/*   Updated: 2023/11/24 22:25:12 by bkotwica         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdio.h>

int	ft_strlen(char *str)
{
	int	counter;

	counter = 0;
	while(*str != '\0')
	{
		write(1, str, 1);
		counter ++;
		str ++;
	}
	return counter;
}


int main (void)
{

	printf("%d", ft_strlen("Bartek Kotwica"));
	return 1;
}

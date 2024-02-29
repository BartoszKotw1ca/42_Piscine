/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkotwica <bartekbkotwica@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 15:55:41 by bkotwica          #+#    #+#             */
/*   Updated: 2023/11/23 16:42:52 by bkotwica         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <unistd.h>

void	ft_putstr(char *str)
{
	while (*str != '\0')
	{
		write(1, str , 1);
		str++;
	}
}

int main(void)
{
	ft_putstr(" afasdfasfdfgsdfg");
	return 0;
}

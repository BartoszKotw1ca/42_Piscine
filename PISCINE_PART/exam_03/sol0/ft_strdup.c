/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkotwica <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 18:18:31 by bkotwica          #+#    #+#             */
/*   Updated: 2023/12/04 18:43:05 by bkotwica         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
char	*ft_strdup(char *src)
{
	char *str;
	char *temp;

	str = (char *)malloc(4 * sizeof(char));
	temp = str;
	while (*src != '\0')
	{
		*temp = *src;
		temp ++;
		src ++;
	}
	*temp = '\0';
	return (str);
	//free(str);
}

#include <stdio.h>
int	main(void)
{
	char str1[] = "abc";
	printf("%s", ft_strdup(str1));
	
}

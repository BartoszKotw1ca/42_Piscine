/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search_and_replace.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkotwica <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 09:52:07 by bkotwica          #+#    #+#             */
/*   Updated: 2023/11/30 09:57:46 by bkotwica         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*search_and_replace(char *string, char *to_change, char *changed)
{
	char	*original;
	
	original = string;
	while (*string != '\0')
	{
		if (*string == *to_change)
		{
			*string = *changed;
		}
		string ++;
	}
	*string = '\0';
	return (original);
}

int	main(int ar, char **argv)
{
	if (ar != 4)
	{
		write(1, "\n", 1);
	}
	else if (argv[2][1] != '\0' || argv[3][1] != '\0')
	{
		write(1, "\n", 1);
	}
	else
	{
		char	*c = search_and_replace(argv[1], argv[2], argv[3]);
		while (*c != '\0')
		{
			write(1, c, 1);
			c ++;
		}
		write(1, "\n", 1);
	}
}

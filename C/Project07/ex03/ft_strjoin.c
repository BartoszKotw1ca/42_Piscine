/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkotwica <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 12:06:44 by bkotwica          #+#    #+#             */
/*   Updated: 2023/12/13 19:41:55 by bkotwica         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	leng(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i ++;
	return (i);
}

typedef struct Joins
{
	char	*str;
	int		i;
	int		j;
	int		k;
	int		len;
}	t_Join;

char	*ft_strjoin(int size, char **strs, char *sep)
{
	t_Join	join;

	join.i = 0;
	join.len = 0;
	while (join.i < size)
		join.len += leng(strs[join.i++]);
	join.len += leng(sep);
	join.str = (char *)malloc((join.len + 1) * sizeof(char));
	if (!join.str)
		return (0);
	join.i = 0;
	join.k = 0;
	while (join.i < size)
	{
		join.j = 0;
		while (strs[join.i][join.j] != '\0')
			join.str[join.k ++] = strs[join.i][join.j ++];
		join.j = 0;
		while (sep[join.j] != '\0' && join.i != size - 1)
			join.str[join.k ++] = sep[join.j ++];
		join.i ++;
	}
	join.str[join.k] = '\0';
	return (join.str);
}
/*
int	main(void)
{
	char	*strs[3] = {"tak", "nie", "adfsa"};
	
	//strs[0] = "tak";
	//strs[1] = "nie";
	char	*res = ft_strjoin(0, strs, " byk ");
	printf("%s", res);
	free(res);
}
*/

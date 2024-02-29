/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_argc_argv.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkotwica <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 18:51:20 by bkotwica          #+#    #+#             */
/*   Updated: 2023/11/27 19:02:34 by bkotwica         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdio.h>

int	main(int argc, char **argv)
{
	printf("%d", argc);//prints the number of arguments given to main + ./a.out
	printf("%s", argv[1]);//prints first given afgument (after space)
}


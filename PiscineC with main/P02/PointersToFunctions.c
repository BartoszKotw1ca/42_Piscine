/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PointersToFunctions.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkotwica <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 13:20:05 by bkotwica          #+#    #+#             */
/*   Updated: 2023/11/27 15:18:55 by bkotwica         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdio.h>

int Add(int a, int b)
{
	return(a + b);
}

void printHello(char *name)
{
	write(1, "hello, ", 7);
	write(1, name, 10);
}

void A()
{
	write(1, "Hello", 5);
}

void B(void (*ptr)())
{
	ptr();
}




int main(void)
{
	int c;
	int(*pointerFunkcji)(int,int);
	pointerFunkcji = &Add; //it could be te same without &
	c = (*pointerFunkcji)(2,3); //pointerFunkcji(2,3)
        printf("%d", c);
	printHello("bartek");
}


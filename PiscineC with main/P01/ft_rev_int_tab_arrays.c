/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkotwica <bartekbkotwica@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 11:56:04 by bkotwica          #+#    #+#             */
/*   Updated: 2023/11/25 15:02:31 by bkotwica         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdlib.h>
/*
void	ft_rev_int_tab(int *tab, int size)
{

}

int main(void)
{
	int myNumbers[] = {1, 2, 3};
	while 
	write(1, &myNumbers, 2);
	//ft_rev_int_tab(myNumbers, 3);
	return 1;
}
*/

// C Program to calculate size of an array using pointer arithmetic
#include <stdio.h>

int main()
{

	int Arr[] = { 1, 2, 3, 4, 5, 6 };
	// variable to store the size of Arr
	int *ptra;
	printf("%p\n", &Arr);
	printf("%p\n", *(&Arr + 1));
	printf("%p\n", Arr);
	*ptra = Arr;
	
	int length = *(&Arr + 1) - Arr;

	printf( "Number of elements in Arr[] is: %d", length);
	return 0;
}
















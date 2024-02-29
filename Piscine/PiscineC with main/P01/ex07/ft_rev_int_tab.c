/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkotwica <bartekbkotwica@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 11:56:04 by bkotwica          #+#    #+#             */
/*   Updated: 2023/11/26 11:09:46 by bkotwica         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
void	ft_rev_int_tab(int *tab, int size)
{
	printf("wartos tablicy dla indexu 0 %d\n", tab[0]);
	printf("wartos tablicy dla indexu 1 %d\n", tab[1]);
	printf("wartos tablicy dla indexu 2 %d\n", tab[2]);
	int el = 0;
	int tem;
	int times;
	if (size % 2 == 0)
	{
		times = size / 2;
	}
	else
	{
		times = (size - 1) / 2;
	}
	printf("=======================\n");
	while (times > 0)
	{
		printf("wartos tablicy przed %d\n", tab[el]);
		tem = tab[el];
	       	printf("wartosc dla pierwszego%d\n", tem);
		printf("wartosc dla ostatniego %d\n", tab[size - 1]);
		tab[el] = tab[size - 1];
		tab[size - 1] = tem;	
		printf("wartos tablicy po %d\n", tab[el]);
		el ++;
		times --;
		size --;
	}
	printf("======================\n");
	printf("wartos tablicy dla indexu 0 %d\n", tab[0]);
	printf("wartos tablicy dla indexu 1 %d\n", tab[1]);
	printf("wartosc tablicy dla indexu 2 %d\n", tab[2]);
}

int main(void)
{	
	int nu[] = {1, 2, 7};
	ft_rev_int_tab(nu, 3);
	return 1;
}

/*
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

int main()
{
	int Arr[] = {7, 2, 9, 4, 5};
	int el = 0;
	int sum = 0;
	int lenght = *(&Arr + 1) - Arr;	
	while(lenght > 0)
	{
		sum += Arr[el]; 
		printf("%d", Arr[el]);
		lenght --;
		el ++;
	}
	printf("%d", sum);
}





{

	int Arr[] = {0, 2, 3, 5, 4};
	int el = 0;
	int temp;
//	int lenght = 5;
	int lenght = *(&Arr + 1) - Arr;
//	printf("%d , %d\n", lenght, el);
	int el1 = 0;
	int counter = 0;

	while (Arr[el1] != '\0')
	{
		counter ++;
		el1 ++;
	}
	printf("%d", counter);
//	printf("%d", counter);
	//printf("%d", Arr[1]);
//	Arr[1] = 5;
	//printf("%d", Arr[1]);
	while (el<2)
	{
//		printf("%d %d\n", Arr[el], Arr[lenght]);
		temp = Arr[el];
		Arr[el] = Arr[lenght - (1+el)];
		Arr[lenght - 1] = temp;
//		printf("%d %d\n", Arr[el], Arr[lenght]);
		//lenght --;
		el++;
	}
	printf("%d", Arr[1]);	
}


	printf("asdfasdfa");
	printf("%d", Arr[0]);
	//printf("%d", Arr[1]);
	//printf("%d", Arr[3]);



	variable to store the size of Arr
	int *ptra;
	printf("%p\n", &Arr);
	printf("%p\n", *(&Arr + 1));
	printf("%p\n", Arr);
	*ptra = &Arr;
	
	//int length = *(&Arr + 1) - Arr;

	//printf( "Number of elements in Arr[] is: %d", length);

*/	

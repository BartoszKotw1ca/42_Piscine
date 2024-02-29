/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkotwica <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/25 09:15:44 by bkotwica          #+#    #+#             */
/*   Updated: 2023/11/25 09:15:59 by bkotwica         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int main(void)
{
        char a = '1';
        char b = 'c';
        
        char *ptra;
        char *ptrb;
        
        ptra = &a;
        ptrb = &b;
        
        *ptra = a;
        *ptrb = b;
        
        write(1, ptra, 1);
        write(1, "\n", 1);
        write(1, ptrb, 1);
        
        write(1, "\n", 1);
        
        write(1, &a, 2);
        write(1, "\n", 1);
        write(1, &b, 1);
}



















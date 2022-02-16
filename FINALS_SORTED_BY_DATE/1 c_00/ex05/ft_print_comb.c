/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bislamov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/12 18:31:38 by bislamov          #+#    #+#             */
/*   Updated: 2020/03/12 18:40:50 by bislamov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	 ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb()
{   
    char a = '0';
    char b;
    char c;
while(a <= '7')
{
    b = a + 1;    
    while(b <= '8')
    {
        c = b + 1;
        while(c <= '9')
        {
            ft_putchar(a);
            ft_putchar(b);
            ft_putchar(c);
            
            if ( a != '7') {
                ft_putchar(',');
                ft_putchar(' ');
            }
            c++;
        }
        b++;

    }
    a++;
 }
    
}

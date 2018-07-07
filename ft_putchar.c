/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_putchar.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: gveloso <marvin@le-101.fr>                 +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/07 11:08:45 by gveloso      #+#   ##    ##    #+#       */
/*   Updated: 2018/07/07 16:45:27 by eschnell    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void    ft_print(char c)
{
    if (c == 'a')
        ft_putchar('A');
    else if (c == 'b')
        ft_putchar('B');
    else if (c == 'c')
        ft_putchar('C');
    else if (c == 'd')
        ft_putchar(' ');
    else if (c == 'n')
        ft_putchar('\n');
}

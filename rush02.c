/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   rush02.c                                         .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: eschnell <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/07 10:03:33 by eschnell     #+#   ##    ##    #+#       */
/*   Updated: 2018/07/07 14:47:48 by eschnell    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <stdio.h>
void	ft_putchar(char);

void	ft_print(char c)
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

void	ft_printline(int i, int x)
{
	while (i <= x)
	{
		if (i == 1 || i == x)
			ft_print('a');
		else
			ft_print('b');
		i++;
	}
	ft_print('n');
}

void	ft_printcolumn(int j, int y)
{
	while (j <= y)
	{
		if (j == 1)
			ft_print('a');
		else if (j == y)
			ft_print('c');
		else
			ft_print('b');
		ft_print('n');
		j++;
	}
}

void	ft_printsquare(int i, int j, int x, int y)
{
	int	stock_i;

	stock_i = 1;
	while (stock_i <= y)
	{
		i = stock_i;
		if (i == 1)
			ft_printline(i, x);
		else if (j > 1 && j < y)
		{
			i = 1;
			while (i <= x)
			{
				if (i == 1 || i == x)
					ft_print('b');
				else
					ft_print('d');
				i++;
			}
			ft_print('n');
		}
		else
		{
			i = 1;
			while (i <= x)
			{
				if (i == 1 || i == x)
					ft_print('c');
				else
					ft_print('b');
				i++;
			}
		}
		j++;
		stock_i++;
	}
}

void	rush(int x, int y)
{
	int	i;
	int	j;

	i = 1;
	j = 1;
	if (x == 1 && y == 1)
		ft_print('a');
	else if (y == 1)
		ft_printline(j, x);
	else if (x == 1)
		ft_printcolumn(i, y);
	else
		ft_printsquare(i, j, x, y);
}

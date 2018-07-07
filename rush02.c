/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   rush02.c                                         .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: eschnell <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/07 10:03:33 by eschnell     #+#   ##    ##    #+#       */
/*   Updated: 2018/07/07 17:02:11 by eschnell    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

void	ft_putchar(char);
void	ft_print(char);

void	ft_printline(int z, int i, int x)
{
	if (z == 1)
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
	else if (z == 2)
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
			ft_printline(1, i, x);
		else if (j > 1 && j < y)
			ft_printline(2, i, x);
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
			ft_print('n');
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
	{
		ft_print('a');
		ft_print('n');
	}
	else if (y == 1)
		ft_printline(1, j, x);
	else if (x == 1)
		ft_printcolumn(i, y);
	else
		ft_printsquare(i, j, x, y);
}

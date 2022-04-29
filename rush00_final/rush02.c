/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soon <soon@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/10 13:43:40 by soon              #+#    #+#             */
/*   Updated: 2022/04/10 14:51:39 by soon             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_error(int x, int y);
void	ft_printrow(int x, int y, int cy, int cx);
void	ft_putchar(char r);

void	rush(int x, int y)
{
	char	cx;
	char	cy;

	if (ft_error(x, y))
		return ;
	cy = 1;
	while (cy <= y)
	{
		cx = 1;
		while (cx <= x)
		{
			ft_printrow(x, y, cy, cx);
			cx++;
		}
		ft_putchar('\n');
		cy++;
	}
}

int	ft_error(int x, int y)
{
	if (x <= 0 || y <= 0)
	{
		write(1, "haha nice try", 13);
		write(1, "\n", 1);
		return (1);
	}
	else
		return (0);
}

void	ft_printrow(int x, int y, int cy, int cx)
{
	if (cy == y && cx == x && cx != 1 && cy != 1)
		ft_putchar('C');
	else if (cy == 1 && cx == 1)
		ft_putchar('A');
	else if (cx == x && cy == 1)
		ft_putchar('A');
	else if (cy == y && cx == 1)
		ft_putchar('C');
	else if (cx > 1 && cx < x && cy > 1 && cy < y)
		ft_putchar(' ');
	else
		ft_putchar('B');
}

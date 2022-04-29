/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kleong <kleong@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/10 14:12:12 by kleong            #+#    #+#             */
/*   Updated: 2022/04/10 15:40:38 by kleong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_error(int x, int y);
void	ft_printrow(int x, int y, int cx, int cy);
void	ft_putchar(char a);

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
			ft_printrow(x, y, cx, cy);
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
		write(1, "error", 5);
		write(1, "\n", 1);
		return (1);
	}
	else
		return (0);
}

void	ft_printrow(int x, int y, int cx, int cy)
{
	if (cx == x && cy == y && cx != 1 && cy != 1)
		ft_putchar('C');
	else if (cx == 1 && cy == 1)
		ft_putchar('A');
	else if (cx == x && cy == 1)
		ft_putchar('C');
	else if (cx == 1 && cy == y)
		ft_putchar('A');
	else if (cx > 1 && cx < x && cy > 1 && cy < y)
		ft_putchar(' ');
	else
		ft_putchar('B');
}

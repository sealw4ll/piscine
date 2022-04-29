/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wting <wting@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/09 13:51:52 by wting             #+#    #+#             */
/*   Updated: 2022/04/11 17:33:42 by wting            ###   ########.fr       */
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
		ft_putchar('/');
	else if (cy == 1 && cx == 1)
		ft_putchar('/');
	else if (cx == x && cy == 1)
		ft_putchar('\\');
	else if (cy == y && cx == 1)
		ft_putchar('\\');
	else if (cx > 1 && cx < x && cy > 1 && cy < y)
		ft_putchar(' ');
	else
		ft_putchar('*');
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wting <wting@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/10 14:09:41 by wting             #+#    #+#             */
/*   Updated: 2022/04/11 17:08:10 by wting            ###   ########.fr       */
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
	if (cy == 1 && cx > 1 && cx < x)
		ft_putchar('-');
	else if (cy == y && cx > 1 && cx < x)
		ft_putchar('-');
	else if (cy > 1 && cy < y && cx == 1)
		ft_putchar('|');
	else if (cy > 1 && cy < y && cx == x)
		ft_putchar('|');
	else if (cy > 1 && cy < y && cx < x && cx > 1)
		ft_putchar(' ');
	else
		ft_putchar('o');
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wting <wting@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/10 17:41:01 by wting             #+#    #+#             */
/*   Updated: 2022/04/10 17:47:16 by wting            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb(void);
void	writef(char a, char b, char c);

int	main(void)
{
	ft_print_comb();
	return (0);
}

void	ft_print_comb(void)
{
	char	a;
	char	b;
	char	c;

	a = 48;
	while (a <= 55)
	{
		b = a + 1;
		while (b <= 56)
		{
			c = b + 1;
			while (c <= 57)
			{
				writef(a, b, c);
				c++;
			}
			b++;
		}
		a++;
	}
}

void	writef(char a, char b, char c)
{
	write(1, &a, 1);
	write(1, &b, 1);
	write(1, &c, 1);
	if (a == 55)
	{
		write(1, "\n", 1);
		return ;
	}
	else
		write(1, ", ", 2);
}

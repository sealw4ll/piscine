/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wting <wting@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/12 10:45:25 by wting             #+#    #+#             */
/*   Updated: 2022/04/13 21:27:34 by wting            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	tempa;
	int	tempb;

	if (b != 0)
	{
		tempa = *a / *b;
		tempb = *a % *b;
		*a = tempa;
		*b = tempb;
	}
}

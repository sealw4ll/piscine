/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wting <wting@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/14 20:25:47 by wting             #+#    #+#             */
/*   Updated: 2022/04/15 11:32:29 by wting            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	i;
	int	y;

	i = 0;
	while (s1[i] != '\0' || s2[i] != '\0')
	{
		y = s1[i] - s2[i];
		if (y == 0)
			i++;
		else
			return (y);
	}
	return (0);
}

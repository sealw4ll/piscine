/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wting <wting@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/14 21:16:47 by wting             #+#    #+#             */
/*   Updated: 2022/04/19 11:58:19 by wting            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	y;

	i = 0;
	y = 0;
	while (dest[i] != '\0')
	  i++;
	while (src[y] != '\0')
	{
		dest[i + y] = src[y];
		y++;
	}
	dest[i + y] = '\0';
	return (dest);
}

int main(void)
{
	char output;
	char dest[50] = "Hello";
	char src[50] = " World";

	ft_strcat(dest, src);
	write(1, dest, 12);
}
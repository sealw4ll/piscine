/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wting <wting@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/14 12:45:54 by wting             #+#    #+#             */
/*   Updated: 2022/04/16 13:18:03 by wting            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned	int	i;

	i = 0;
	while (i < n || src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
		printf("%d, %d, %s, %s\n", i, n, dest, src);
	}
	dest[i] = '\0';
	return (dest);
}

int		main(void)
{
	char *src;
	char *dest;

	dest = "123456789";
	src = "abcdef";
	printf("base   : %s\n", src);
	strncpy(dest, src, 3);
	printf("cpy    : %s\n", dest);
	ft_strncpy(dest, src, 3);
	printf("ft_cpy : %s\n", dest);
}

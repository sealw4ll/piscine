/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strncat.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wting <wting@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/15 15:33:25 by wting             #+#    #+#             */
/*   Updated: 2022/04/19 11:23:35 by wting            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str,unsigned int nb)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	*ft_strcat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	y;

	y = 0;
	i = ft_strlen(*dest, nb) + 1;
	while (src[y] != '\0' || src[y] < nb)
	{
		dest[i] = src[y];
		y++;
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

int main(void)
{

}

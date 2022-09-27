/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eagirman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 20:01:12 by eagirman          #+#    #+#             */
/*   Updated: 2021/11/04 18:57:47 by eagirman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	c;
	unsigned int	a;

	c = 0;
	while (dest[c])
		c++;
	a = 0;
	while (src[a] && a < nb)
	{
		dest[c] = src[a];
		c++;
		a++;
	}
	dest[c] = '\0';
	return (dest);
}

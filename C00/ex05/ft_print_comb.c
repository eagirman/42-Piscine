/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eagirman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/23 12:33:34 by eagirman          #+#    #+#             */
/*   Updated: 2021/10/23 16:48:33 by eagirman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_before(char a, char b, char c)
{
	ft_putchar(48 + a);
	ft_putchar(48 + b);
	ft_putchar(48 + c);
	if (a + b + c != 24)
	{
		ft_putchar(44);
		ft_putchar(' ');
	}
}

void	ft_print_comb(void)
{
	int	a;
	int	b;
	int	c;

	a = 0 ;
	while (a <= 7)
	{
		b = a + 1;
		while (b <= 8)
		{
			c = b + 1;
			while (c <= 9)
			{
				ft_print_before(a, b, c);
				c++;
			}
			b++;
		}
		a++;
	}
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eagirman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/23 16:55:19 by eagirman          #+#    #+#             */
/*   Updated: 2021/10/23 21:36:38 by eagirman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_before(int a, int b )
{
	ft_putchar(a / 10 + 48);
	ft_putchar(a % 10 + 48);
	ft_putchar(' ');
	ft_putchar(b / 10 + 48);
	ft_putchar(b % 10 + 48);
	if (a + b != 197)
	{
		ft_putchar(44);
		ft_putchar(' ');
	}
}

void	ft_print_comb2(void)
{
	int (a);
	int (b);
	a = 0;
	while (a <= 98)
	{	
		b = a + 1;
		while (b <= 99)
		{
			ft_print_before(a, b);
			b++;
		}
		a++;
	}
}

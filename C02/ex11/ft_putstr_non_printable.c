/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eagirman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 13:53:03 by eagirman          #+#    #+#             */
/*   Updated: 2021/11/02 13:53:11 by eagirman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr_non_printable(char *str)
{
	char	*hex;

	hex = "0123456789abcdef";
	while (*str != '\0')
	{
		if (*str < 32 || *str == 127)
		{
			ft_putchar('\\');
			ft_putchar(hex[*str / 16]);
			ft_putchar(hex[*str % 16]);
		}
		else
			ft_putchar(*str);
		str++;
	}
}

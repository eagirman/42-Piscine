/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eagirman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 14:12:28 by eagirman          #+#    #+#             */
/*   Updated: 2021/11/09 15:39:59 by eagirman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
//#include <stdio.h>

int	*ft_range(int min, int max)
{
	int	c;
	int	i;
	int	*a;

	i = 0;
	if (min >= max)
		return (0);
	c = max - min - 1;
	a = malloc(sizeof(int) * c);
	if (a == NULL)
		return (0);
	while (i <= c)
	{
		a[i] = min + i;
		i++;
	}
	return (a);
}
/*
void	debug_dump_array(int numbers[], int size)
{
	int index;

	printf("[ ");
	index = 0;
	while (index < size)
	{
		printf("%d", numbers[index]);
		if (index != size - 1)
		{
			printf(", ");
		}
		index++;
	}
	printf(" ]");
}

int		main(void)
{
	int	min;
	int	max;

	min = 5;
	max = 10;
	printf("min = %d, max = %d -> ", min, max);
	debug_dump_array(ft_range(min, max), max - min);
}
*/

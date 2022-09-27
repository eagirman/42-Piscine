/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eagirman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 15:47:20 by eagirman          #+#    #+#             */
/*   Updated: 2021/11/12 03:20:51 by eagirman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	len;
	int	i;
	int	*a;

	if (min >= max)
	{
		*range = 0;
		return (0);
	}
	len = max - min;
	a = malloc(sizeof(int) * len);
	if (!a)
	{
		*range = 0;
		return (-1);
	}
	*range = a;
	i = 0;
	while (min < max)
	{
		a[i++] = min++;
	}
	return (len);
}
/*
void	debug_dump_array(int numbers[], int size)
{
	int	index;

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
	int	*range;
	int	bound;

	min = 5;
	max = 10;
	bound = ft_ultimate_range(&range, min, max);
	printf("(ttbound = %d) ", bound);
	fflush(stdout);
	debug_dump_array(range, bound + 2);
}
*/

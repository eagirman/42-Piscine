/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eagirman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 10:58:14 by eagirman          #+#    #+#             */
/*   Updated: 2021/11/09 10:59:22 by eagirman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i;
	int	j;

	if (argc > 1)
	{
		i = 1;
		while (i < argc)
		{
			j = 0;
			while (argv[argc - i][j])
			{
				write(1, &argv[argc - i][j], 1);
				j++;
			}
			i++;
			write(1, "\n", 1);
		}
	}
	return (0);
}

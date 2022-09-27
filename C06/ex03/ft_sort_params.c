/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eagirman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 10:59:49 by eagirman          #+#    #+#             */
/*   Updated: 2021/11/09 11:04:36 by eagirman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
}

int	ft_strcmp(char *s2, char *s1)
{
	int	i;

	i = 0;
	while (s1[i] && s2[i] && (s1[i] == s2[i]))
	{
		i++;
	}
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}

void	ft_swap(char **s1, char **s2)
{
	char	*t;

	t = *s1;
	*s1 = *s2;
	*s2 = t;
}

int	main(int argc, char **argv)
{
	int	i;
	int	j;

	i = 1;
	while (i < argc)
	{	
		j = 1;
		while (j < argc - 1)
		{
			if (ft_strcmp(argv[j], argv[j + 1]) < 0)
				ft_swap(&argv[j], &argv[j + 1]);
			j++;
		}
		i++;
	}
	j = 1;
	while (j < argc)
	{
		ft_putstr(argv[j]);
		write(1, "\n", 1);
		j++;
	}
}

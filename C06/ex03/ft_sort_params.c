/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yerkiral <yerkiral@42kocaeli.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 17:48:54 by yerkiral          #+#    #+#             */
/*   Updated: 2021/12/07 17:48:55 by yerkiral         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdbool.h>

void	ft_putstr(char *str)
{
	while (*str)
		write(1, str++, 1);
}	

void	ft_swap(char **a, char **b)
{
	char	*swap;

	swap = *a;
	*a = *b;
	*b = swap;
}

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0' && (s1[i] == s2[i]))
	{
		i++;
	}
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}

void	ft_sort(char **av, int len, int ind)
{
	int		index;
	bool	swap;

	index = ind;
	while (true)
	{
		index = ind;
		swap = false;
		while (index < len)
		{
			if (ft_strcmp(av[index], av[index + 1]) > 0)
			{
				ft_swap(&av[index], &av[index + 1]);
				swap = true;
			}
			index++;
		}
		if (!swap)
			break ;
	}
}

int	main(int argc, char **argv)
{
	int	i;

	if (argc > 2)
	{
		ft_sort(argv, argc - 1, 1);
	}
	i = 1;
	while (i < argc)
	{
		ft_putstr(argv[i]);
		ft_putstr("\n");
		i++;
	}
}

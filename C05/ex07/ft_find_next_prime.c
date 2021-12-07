/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yerkiral <yerkiral@42kocaeli.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 01:44:01 by yerkiral          #+#    #+#             */
/*   Updated: 2021/12/07 21:40:49 by yerkiral         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdbool.h>

bool	ft_is_prime(int nb)
{
	int	i;

	i = 2;
	if (nb < 2)
		return (false);
	while (i <= 46341)
	{
		if ((i * i) == nb)
			return (false);
		if (nb % i == 0)
			return (false);
		i++;
	}
	return (true);
}

int	ft_find_next_prime(int nb)
{
	while (!ft_is_prime(nb) && nb < 2147483647)
	{
		nb++;
	}
	return (nb);
}

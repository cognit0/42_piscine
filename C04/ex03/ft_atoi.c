/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yerkiral <yerkiral@42kocaeli.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/05 23:14:14 by yerkiral          #+#    #+#             */
/*   Updated: 2021/12/05 23:15:11 by yerkiral         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdbool.h>

bool	is_number(char a)
{
	return (a >= '0' && a <= '9');
}

int	ft_atoi(char *str)
{
	int	air;
	int	hyno;

	hyno = 0;
	air = 1;
	while (*str != '\0')
	{
		if (*str == '-')
			air *= -1;
		if (*str < 58 && *str > 47)
			break ;
		str++;
	}	
	while (is_number(*str))
	{
		hyno *= 10;
		hyno += *str - '0';
		str++;
	}
	return (hyno * air);
}

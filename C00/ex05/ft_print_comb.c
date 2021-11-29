/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yerkiral <yerkiral@42kocaeli.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 19:11:00 by yerkiral          #+#    #+#             */
/*   Updated: 2021/11/25 20:49:05 by yerkiral         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_comma_space(void)
{
	ft_putchar(',');
	ft_putchar(' ');
}

void	ft_print(char a, char b, char c)
{
	ft_putchar(a);
	ft_putchar(b);
	ft_putchar(c);
	if (a == 55 && c == 57)
	{
		return ;
	}	
	ft_comma_space();
}

void	ft_print_comb(void)
{
	char	a;
	char	b;
	char	c;

	a = 48;
	b = 48;
	c = 48;
	while (a <= 57)
	{
		b = a + 1;
		while (b <= 57)
		{
			c = b + 1;
			while (c <= 57)
			{
				ft_print(a, b, c);
				c++;
			}
			b++;
		}
		a++;
	}
}

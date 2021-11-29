/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yerkiral <yerkiral@42kocaeli.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 20:49:20 by yerkiral          #+#    #+#             */
/*   Updated: 2021/11/25 20:52:20 by yerkiral         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print(char a, char b, char c, char d)
{
	ft_putchar(a);
	ft_putchar(b);
	ft_putchar(' ');
	ft_putchar(c);
	ft_putchar(d);
	if (a == 57 && b == 56 && c == 57 && d == 57)
	{
		return ;
	}
	ft_putchar(',');
	ft_putchar(' ');
}

void	ft_put_comb(char a, char b, char c, char d)
{
	while (a <= 57)
	{
		b = 48;
		while (b <= 57)
		{
			c = 48;
			while (c <= 57)
			{
				d = b + 1;
				while (d <= 57)
				{
					ft_print(a, b, c, d);
					d++;
				}
				++c;
			}
			++b;
		}
		++a;
	}
}

void	ft_print_comb2(void)
{
	char	a;
	char	b;
	char	c;
	char	d;

	a = 48;
	b = 48;
	c = 48;
	d = 48;
	ft_put_comb(a, b, c, d);
}

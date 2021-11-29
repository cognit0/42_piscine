/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yerkiral <yerkiral@42kocaeli.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/28 01:25:12 by yerkiral          #+#    #+#             */
/*   Updated: 2021/11/28 02:15:26 by yerkiral         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	a;
	int	b;
	int	tmp;

	a = 0;
	while (a < size)
	{
		b = 0;
		while (b < size)
		{
			if (tab[a] > tab[b])
			{
				tmp = tab[a];
				tab[a] = tab[b];
				tab[b] = tmp;
			}
			b++;
		}
		a++;
	}
}
int main()
{
	int a[] = {5, 31, 7, 69, 42};
	int size = 5;
	int i = 0;

	ft_sort_int_tab(a, size);		
	while (i < size)
	{
		printf("%d ", a[i]);
		i++;
	}
}

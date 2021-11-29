/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yerkiral <yerkiral@42kocaeli.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 20:24:40 by yerkiral          #+#    #+#             */
/*   Updated: 2021/11/29 20:32:42 by yerkiral         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_number_or_letter(char *a, int *c)
{
	if (*a == 65 || *a == 97)
	{
		*a += 26;
		*c += 26;
	}
	if (*a == 48)
	{
		*a += 10;
		*c += 10;
	}
}

void	ft_make_lower(char *str, int n)
{
	int		i;
	char	upper;
	char	tmp;

	upper = 65;
	while (upper < 91)
	{
		if (str[n] == upper)
		{	
			tmp = str[n];
			str[n] = tmp + 32;
			break ;
		}	
		upper++;
	}
}

int	ft_one_before_is_non_letter(char *str, int n)
{
	int		istrue;
	int		c;
	char	a;

	c = 0;
	a = 0;
	istrue = 0;
	while (c < 128)
	{
		ft_number_or_letter(&a, &c);
		if (str[n - 1] == a)
		{
			istrue++;
			break ;
		}
		a++;
		c++;
	}
	return (istrue);
}

void	ft_do_cap(char *str, int i)
{
	int	tmp;

	if (i == 0 || ft_one_before_is_non_letter(str, i) == 1)
	{
		tmp = str[i];
		str[i] = tmp - 32;
	}
	else
	{	
		ft_make_lower(str, i + 1);
	}
}	

char	*ft_strcapitalize(char *str)
{
	int		i;
	char	lower;
	char	upper;

	i = 0;
	while (str[i] != '\0')
	{
		lower = 97;
		upper = 65;
		while (upper < 91 || lower < 123)
		{
			if (str[i] == lower || str[i] == upper)
			{
				ft_do_cap(str, i);
			}	
			upper++;
			lower++;
		}
		i++;
	}
	return (str);
}

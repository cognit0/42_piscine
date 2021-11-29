/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yerkiral <yerkiral@42kocaeli.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/30 02:23:13 by yerkiral          #+#    #+#             */
/*   Updated: 2021/11/30 02:23:21 by yerkiral         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_true(int istrue, int i)
{
	if (istrue == i || i == 0)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

int	ft_str_is_lowercase(char *str)
{
	int		i;
	int		istrue;
	char	lower;

	i = 0;
	istrue = 0;
	while (str[i] != '\0')
	{
		lower = 97;
		while (lower < 123)
		{
			if (str[i] == lower)
			{
				istrue++;
				break ;
			}
			lower++;
		}
		i++;
	}
	return (ft_str_true(istrue, i));
}

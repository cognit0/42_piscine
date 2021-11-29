/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yerkiral <yerkiral@42kocaeli.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/30 02:27:42 by yerkiral          #+#    #+#             */
/*   Updated: 2021/11/30 02:27:59 by yerkiral         ###   ########.fr       */
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

int	ft_str_is_uppercase(char *str)
{
	int		i;
	int		istrue;
	char	upper;

	i = 0;
	istrue = 0;
	while (str[i] != '\0')
	{
		upper = 65;
		while (upper < 91)
		{
			if (str[i] == upper)
			{
				istrue++;
				break ;
			}
			upper++;
		}
		i++;
	}
	return (ft_str_true(istrue, i));
}

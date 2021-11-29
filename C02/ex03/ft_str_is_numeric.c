/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yerkiral <yerkiral@42kocaeli.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/30 02:18:38 by yerkiral          #+#    #+#             */
/*   Updated: 2021/11/30 02:18:40 by yerkiral         ###   ########.fr       */
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

int	ft_str_is_numeric(char *str)
{
	int		i;
	int		istrue;
	char	numeric;

	i = 0;
	istrue = 0;
	while (str[i] != '\0')
	{
		numeric = 48;
		while (numeric < 58)
		{
			if (str[i] == numeric)
			{
				istrue++;
				break ;
			}
			numeric++;
		}
		i++;
	}
	return (ft_str_true(istrue, i));
}

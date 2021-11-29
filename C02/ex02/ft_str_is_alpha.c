/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yerkiral <yerkiral@42kocaeli.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/30 02:13:18 by yerkiral          #+#    #+#             */
/*   Updated: 2021/11/30 02:13:23 by yerkiral         ###   ########.fr       */
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

int	ft_str_is_alpha(char *str)
{
	int		i;
	int		istrue;
	char	upper;
	char	lower;

	i = 0;
	istrue = 0;
	while (str[i] != '\0')
	{	
		upper = 65;
		lower = 97;
		while (upper < 91 || lower < 123)
		{
			if (str[i] == upper || str[i] == lower)
			{
				istrue++;
				break ;
			}
			lower++;
			upper++;
		}	
		i++;
	}
	return (ft_str_true(istrue, i));
}

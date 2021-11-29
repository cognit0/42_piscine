/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yerkiral <yerkiral@42kocaeli.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/30 02:32:26 by yerkiral          #+#    #+#             */
/*   Updated: 2021/11/30 02:32:29 by yerkiral         ###   ########.fr       */
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

int	ft_str_is_printable(char *str)
{
	int		i;
	int		istrue;
	char	pb;

	i = 0;
	istrue = 0;
	while (str[i] != '\0')
	{
		pb = 33;
		while (pb < 127)
		{
			if (str[i] == pb)
			{
				istrue++;
				break ;
			}
			pb++;
		}
		i++;
	}
	return (ft_str_true(istrue, i));
}

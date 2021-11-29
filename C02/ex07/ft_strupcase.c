/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yerkiral <yerkiral@42kocaeli.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/30 02:34:38 by yerkiral          #+#    #+#             */
/*   Updated: 2021/11/30 02:34:40 by yerkiral         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str)
{
	int		i;
	char	tmp;
	char	lower;

	i = 0;
	while (str[i] != '\0')
	{
		lower = 97;
		while (lower < 123)
		{
			if (str[i] == lower)
			{
				tmp = str[i];
				str[i] = tmp - 32;
				break ;
			}
			lower++;
		}
		i++;
	}
	return (str);
}

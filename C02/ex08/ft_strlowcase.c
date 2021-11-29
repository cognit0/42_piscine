/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yerkiral <yerkiral@42kocaeli.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/30 02:36:17 by yerkiral          #+#    #+#             */
/*   Updated: 2021/11/30 02:36:20 by yerkiral         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	int		i;
	char	tmp;
	char	upper;

	i = 0;
	while (str[i] != '\0')
	{
		upper = 65;
		while (upper < 91)
		{
			if (str[i] == upper)
			{
				tmp = str[i];
				str[i] = tmp + 32;
				break ;
			}
			upper++;
		}
		i++;
	}
	return (str);
}

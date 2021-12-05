#include <stdbool.h>
#include <unistd.h>

int	ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

bool	ft_is_base(char *base)
{
	int b;
	int i;
	int j;

	j = 0;
	i = 0;
	b = ft_strlen(base);
	while (base[i] != '\0')
	{
		j = 0;
		while (base[j] != '\0')
		{
			if (base[i] == base[j] && j != i)
				return (false);
			j++;
		}
			if (base[i] == '\t' || base[i] == '\n' || base[i] == '\v' || base[i] == '\f'
			|| base[i] == '\r' || base[i] == ' ' || base[i] == '+' || base[i] == '-')
				return (false);
		i++;
	}
	return (true);
}

void	ft_base(int nbr, char *base, int rad)
{
	if (nbr == -2147483648)
	{
		ft_base(nbr / rad, base, rad);
		write(1, &(base[-(nbr %rad)]), 1);
		return ;
	}
	if (nbr < 0)
	{
		write(1, "-", 1);
		ft_base((-nbr), base, rad);
		return ;
	}
	if (nbr > rad - 1)
	{
		ft_base(nbr / rad, base , rad);
	}
	write(1, &(base[nbr % rad]), 1);
}

void	ft_atoi_base(char *str, char *base)
{
	int rad;

	if (!ft_is_base(base))
		return ;
	rad = ft_strlen(base);
	ft_base(nbr, base, rad);
}

int	ft_atoi(char *str, char *base)
{
	int	air;
	int	hyno;
	int rad;

	if (ft_is_base(str))
		return (0);
	rad = ft_strlen(base);
	hyno = 0;
	air = 1;
	while (*str != '\0')
	{
		if (*str == '-')
			air *= -1;
		str++;
	}
	while (is_number(*str))
	{
		hyno *= 10;
		hyno += *str - '0';
		str++;
	}
	return (hyno * air);
}

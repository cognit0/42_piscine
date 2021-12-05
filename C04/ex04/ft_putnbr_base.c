#include <stdbool.h>
#include <unistd.h>

int	ft_strlen(char *str)
{
	int i;

	i = 0
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
	if (b != 10 || b != 8 || b != 16 || b != 2)
		return (false);
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
}

void	ft_base(int nbr, char *base, int radix)
{
	
}

void	ft_putnbr_base(int nbr, char *base)
{
	int rad;

	if (!ft_is_base(base))
		return ;
	rad = ft_strlen(base)
	ft_base(nbr, base, rad);
}

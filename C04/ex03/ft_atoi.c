#include <stdbool.h>

bool is_number(char a)
{
	return (a >= '0' && a <= '9');
}

int	ft_atoi(char *str)
{
	int air;
	int hyno;

	hyno = 0;
	air = 1;
	while (*str != '\0')
	{
		if (*str == '-')
			air *= -1;
		
		if (*str < 58 && *str > 47)
			break ;
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

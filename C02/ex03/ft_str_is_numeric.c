#include <stdio.h>

int	ft_str_is_numeric(char *str)
{
	int i;
	int istrue;
	char numeric;

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
				break;
			}
			numeric++;
		}
		i++;
	}
	if (istrue == i || i == 0)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
	
int main(void)
{
	int a;
	char *s1;
	
	s1 = "";
	a = ft_str_is_numeric(s1);

	printf("%d", a);
}

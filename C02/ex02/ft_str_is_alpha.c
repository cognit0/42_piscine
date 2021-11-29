#include <stdio.h>
#include <unistd.h>

int	ft_str_is_alpha(char *str)
{
	int i;
	int istrue;
	char upper;
	char lower;

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
				break;
			}
			lower++;
			upper++;
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

int main()
{
	int i = 0;
	char *str;


	str = "asdFggz";
	i = ft_str_is_alpha(str);
	printf("%d", i);
	return (0);
}

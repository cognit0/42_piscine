int	ft_str_is_lowercase(char *str)
{
	int i;
	int istrue;
	char lower;

	i = 0;
	istrue = 0;
	while (str[i] != '\0')
	{
		lower = 97;
		while (lower < 123)
		{
			if (str[i] == lower)
			{
				istrue++;
				break;
			}
			lower++;
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

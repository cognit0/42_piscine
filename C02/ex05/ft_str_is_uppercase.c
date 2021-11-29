int	ft_str_is_lowercase(char *str)
{
	int i;
	int istrue;
	char upper;

	i = 0;
	istrue = 0;
	while (str[i] != '\0')
	{
		upper = 65;
		while (upper < 91)
		{
			if (str[i] == upper)
			{
				istrue++;
				break;
			}
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

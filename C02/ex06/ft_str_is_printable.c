int	ft_str_is_lowercase(char *str)
{
	int i;
	int istrue;
	char pb;

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
				break;
			}
			pb++;
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

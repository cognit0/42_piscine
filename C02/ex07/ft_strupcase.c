#include <stdio.h>

char	*ft_strupcase(char *str)
{
	int i;
	char tmp;
	char lower;

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
				break;
			}
			lower++;
		}
		i++;
	}
	return (str);
}

int main()
{
	char s1[] = "hfsijdfH";


	ft_strupcase(&s1[0]);
	printf("%s", s1);
	
}

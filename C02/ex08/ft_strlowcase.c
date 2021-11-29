#include <stdio.h>

char	*ft_strupcase(char *str)
{
	int i;
	char tmp;
	char upper;

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
				break;
			}
			upper++;
		}
		i++;
	}
	return (str);
}

int main()
{
	char s1[] = "hfSIjdFHh";


	ft_strupcase(&s1[0]);
	printf("%s", s1);

}

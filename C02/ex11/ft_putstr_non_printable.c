#include <stdio.h>
#include <unistd.h>

void ft_putstr_non_printable(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{	
		
	}
}

int main()
{
	char s[] = "Coucou\ntu vas bien ?";

	printf("%s ", s);
	ft_putstr_non_printable(s);
	printf("%s \n", s);

}

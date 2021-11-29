#include <stdio.h>

char 	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	int i;

	i = 0;
	while (i < n)
	{
		if (src[i] != '\0')
		{	
			dest[i] = src[i];
		}
		else
		{
			dest[i] = '\0';
		}
		i++;
	}
	return (dest);
}

int main(void)
{

	char *s1;
	char *s2;

	s1 = "hello";

	ft_strncpy(s2, s1, 2);

	printf("%s", s2);

}

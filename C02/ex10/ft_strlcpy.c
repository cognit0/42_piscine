#include <stdio.h>
#include <unistd.h>
#include <string.h>

unsigned int ft_strlcpy(char *dest, char *src, unsigned int size)
{
	int len;
	int i;

	i = 0;
	len = 0;
	while (src[len] != '\0')
	{
		len++;
	}
	if (size != 0)
	{
		while (i < (size - 1) && src[i] != '\0')
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
	}
	return (len);
}

int main()
{
//	char *s1;
//	char s2[6];

//	s1 = "hello";
	
//	strlcpy(s2, s1, 6);
//	ft_strlcpy(s2, s1, 5);
//	printf("%s", s2);
	char	*string1;
	char	string2[2];

	string1 = "0";
	printf("base   : %s\n", string1);
	strlcpy(string2, string1, 1);
	printf("cpy c  : %s\n", string2);
	ft_strlcpy(string2, string1, 1);
	printf("cpy ft : %s\n", string2);

	return (0);
}

#include <stdio.h>
#include <string.h>

char	*ft_strcpy(char *dest, char *src)
{
	int i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

int main(void)
{
	int i = 0;
	char src[] = "hello";
	char dest[6];

	ft_strcpy(dest, src);
	strcpy(dest, src);

	printf("src = %s \n", src); 
	printf("dest = %s \n", dest);

//	while (i < 5)
//	{
//		printf("%c", src[i]);
//		i++;
//	}
}	

#include <stdlib.h>
#define SIZE_OF_CHAR 1

int	ft_get_size(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	*ft_strdup(char *src)
{
	char *cpy;
	int src_size;
	int	i;
   
	i = 0;
	src_size = ft_get_size(src);
	cpy = (char *) malloc((SIZE_OF_CHAR * src_size) + 1);
	while (src[i] != '\0')
	{
		cpy[i] = src[i];
		i++;
	}
	cpy[i] = '\0';
	return (cpy);
}
//	int main(void)
//	{
//		char src[] = "Hello World!";
//	
//		char *target = ft_strdup(src);
//	
//		printf("%s", target);
//	}

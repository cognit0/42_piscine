#include <stdio.h>
#include <string.h>

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
char	*ft_strcat(char *dest, char *src)
{
	int i;
	int size_dest = ft_get_size(dest);

	i = 0;
	while (src[i] != '\0')
	{
		dest[size_dest + i] = src[i];
		i++;
	}
	dest[size_dest + i] = '\0';
	return (dest);
}
int main()
{
	char dest[100] = "Hello";
	char src[] = "World!";
	
	printf("%s\n", strcat(dest, src));
	printf("%s", ft_strcat(dest, src));
	
	return (0);
}

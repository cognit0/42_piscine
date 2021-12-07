#include <stdlib.h>
#include <stdio.h>
#define SIZE_OF_INT 4

//min included - max excluded

int ft_get_range(int min, int max)
{
	int i;

	i = min;
	while (i <= max)
	{
		i++;
	}
	return (i);
}

int	*ft_range(int min, int max)
{
	int *arr;
	int range;
	int i;
	if (min == max || min > max)
		return (arr);

	range = ft_get_range(min, max);
	arr = (int *) malloc(SIZE_OF_INT * range);
	i = 0;
	while (i < range && min <= max)
	{
		arr[i] = min;
	   	i++;	
		min++;
	}
	return (arr);
}

int main(void)
{
	printf("%d\n", ft_get_range(-1, 6));	
	int *i;
	i = ft_range(-1, 1);
	int b = 0;
	while (b < 2)
	{
		printf("%d ", i[b]);
		b++;
	}
}

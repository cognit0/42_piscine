#include <unistd.h>
#include <stdbool.h>

void	ft_putstr(char *str)
{
	while (*str)
		write(1, str++, 1);
}	

void	ft_swap(char **a, char **b)
{
	char *c;

	c = *a;
	*a = *b;
	*b = c;
}

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0' && (s1[i] == s2[i]))
	{
		i++;
	}
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}

int main(int argc, char **argv)
{
	int i;
	int ac;
	int a;

	ac = 1;
	while (true)
	{
		i = 1;
		while (i < 3)
		{
			if (ft_strcmp(argv[i], argv[i + 1]) < 0)
			{
				ft_swap(&argv[i], &argv[i + 1]); 
				
			}
			i++;
		}
		
		ac++;
	}
	i = 1;
	while (i < argc)
	{
		ft_putstr(argv[i]);
		ft_putstr("\n");
		i++;
	}

}

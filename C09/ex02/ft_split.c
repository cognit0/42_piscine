#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int	c_sep(char c, char *charset)
{
	int	i;

	i = 0;
	while (charset[i] != '\0')
	{
		if (c == charset[i])
			return (1);
		i++;
	}
	return (0);
}

int	c_str(char *str, char *charset)
{
	int	i;
	int	count;

	count = 0;
	i = 0;
	while (str[i] != '\0')
	{
		while (str[i] != '\0' && c_sep(str[i], charset))
			i++;
		if (str[i] != '\0')
			count++;
		while (str[i] != '\0' && !c_sep(str[i], charset))
			i++;
	}
	return (count);
}

int	len_sep(char *str, char *charset)
{
	int	i;

	i = 0;
	while (str[i] && !c_sep(str[i], charset))
		i++;
	return (i);
}

char	*ft_word(char *str, char *charset)
{
	int		len_word;
	int		i;
	char	*word;

	i = 0;
	len_word = len_sep(str, charset);
	word = (char *)malloc(sizeof(char) * (len_word + 1));
	while (i < len_word)
	{
		word[i] = str[i];
		i++;
	}
	word[i] = '\0';
	return (word);
}

char	**ft_split(char *str, char *charset)
{
	char	**strings;
	int		i;

	i = 0;
	strings = (char **)malloc(sizeof(char *)
			* (c_str(str, charset) + 1));
	while (*str != '\0')
	{
		while (*str != '\0' && c_sep(*str, charset))
			str++;
		if (*str != '\0')
		{
			strings[i] = ft_word(str, charset);
			i++;
		}
		while (*str && !c_sep(*str, charset))
			str++;
	}
	strings[i] = 0;
	return (strings);
}

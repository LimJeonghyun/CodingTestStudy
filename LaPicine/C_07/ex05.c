#include <stdlib.h>

int	is_charset(char *charset, char c)
{
	int	i;

	i = 0;
	while (charset[i])
	{
		if (charset[i] == c)
			return (1);
		i++;
	}
	return (0);
}

int	check_size(char *str, char *charset)
{
	int	i;
	int	check;
	int	count;

	count = 0;
	check = 0;
	i = 0;
	while (str[i])
	{
		if (is_charset(charset, str[i]))
		{
			if (check == 0)
			{
				count++;
				check = 1;
			}
		}
		else
			check = 0;
		i++;
	}
	return (count);
}

char	*parsing_word(char *str, char *charset, int i)
{
	char	*word;
	int		j;
	int		tmp;

	tmp = i;
	j = 0;
	while (str[tmp] && !is_charset(charset, str[tmp]))
	{
		tmp++;
		j++;
	}
	word = (char *)malloc(sizeof(char) * (j + 1));
	j = 0;
	while (str[i] && !is_charset(charset, str[i]))
	{
		word[j] = str[i];
		j++;
		i++;
	}
	word[j] = 0;
	return (word);
}

char	**ft_split(char *str, char *charset)
{
	char	**res;
	int		size;
	int		i;
	int		j;

	size = check_size(str, charset);
	res = (char **)malloc(sizeof(char *) * (size + 1));
	if (!res)
		return (0);
	j = 0;
	i = 0;
	while (str[i])
	{
        if(is_charset(charset, str[i]))
            i++;
		// while (str[i] && is_charset(charset, str[i]))
		// 	i++;
		if(str[i] && !is_charset(charset, str[i]))
		{
			res [j] = parsing_word(str, charset, i);
			j++;
			while (str[i] && !is_charset(charset, str[i]))
				i++;
		}
	}
    res[i] = 0;
	return (res);
}

#include <stdio.h>

int	main()
{
    printf("======ex05======\n");
		char charset[10] = "!";
		char str[100] = "!!!!!a!!!!";
		char **strs = ft_split(str, charset);
		int i = 0;
		while (strs[i] != NULL)
		{
			printf("%s\n", strs[i]);
			i++;
		}
}

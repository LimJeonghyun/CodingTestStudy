int	ft_len(char *str)
{
	int	count;

	count = 0;
	while (str[count])
		count++;
	return (count);
}

int	is_space(char c)
{
	if ((c >= 9 && c <= 13) || c == ' ' )
		return (1);
	return (0);
}

int	is_valid(char *str)
{
	int	i;
	int	j;

	i = 0;
	if (ft_len(str) < 2)
		return (1);
	while (str[i])
	{
        if(str[i] == '+' || str[i] == '-' || is_space(str[i]))
		    return (1);
        i++;
	}
	while (str[i])
	{
		j = i + 1;
		while (str[j])
		{
			if (str[j] == str[i])
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}

int	base_cal(char *base, char c)
{
	int	i;

	i = 0;
	while (base[i])
	{
		if (base[i] == c)
			return (i);
		i++;
	}
	return (-1);
}

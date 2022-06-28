#include <stdlib.h>

int	is_valid(char *str);
int	is_space(char c);
int	ft_len(char *str);
int	base_cal(char *base, char c);

int	to_ten(char *nbr, char *base)
{
	int	i;
	int	minus;
	int	result;

	result = 0;
	minus = 1;
	i = 0;
	while (is_space(nbr[i]))
		i++;
	while (nbr[i] == '+' || nbr[i] == '-')
	{
		if (nbr[i] == '-')
			minus *= (-1);
		i++;
	}
	while (base_cal(base, nbr[i]) != -1)
	{
		result = base_cal(base, nbr[i]) + result * ft_len(base);
		i++;
	}
	return (result * minus);
}

int	check_size(int nb, int size)
{
	int	count;

	count = 0;
	if (nb == -2147483648)
	{
		count = 11;
		return (count);
	}
	if (nb < 0)
	{
		count++;
		nb *= (-1);
	}
	if (nb < size)
	{
		count++;
		return (count);
	}
	while (nb > 0)
	{
		nb /= size;
		count++;
	}
	return (count);
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	long long		ten;
	int		size;
	char	*res;

	if (is_valid(base_from) || is_valid(base_to))
		return (0);
	ten = to_ten(nbr, base_from);
	size = check_size(ten, ft_len(base_to));
	res = (char *)malloc(sizeof(char) * (size + 1));
	if (!res)
		return (0);
    res[size] = 0;
    if (ten < 0)
    {
        res[0] = '-';
        ten = -ten;
    }
    while (size--)
	{
		res[size] = base_to[ten % ft_len(base_to)];
		ten = ten / ft_len(base_to);
    }
	return (res);
}

#include <stdio.h>
int main()
{
    {
		printf("======ex04======\n");
		char str[5] = "0";
		char base_form[10] = "01";
		char base_to[10] = "01234";
		printf("%s\n", ft_convert_base(str, base_form, base_to));
	}
}
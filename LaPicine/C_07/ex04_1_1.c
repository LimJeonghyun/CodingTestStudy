#include <stdlib.h>
int		lenght_nbr(int nbr, char *base);
int		is_valid(char *str);
int	whitespaces(char *str, int *ptr_i);
int	ft_strlen(char *str);

void	ft_putnbr_base_v2(int nbr, char *base, char *nbrf)
{
	int		lenght_base;
	long	nb;
	int		i;
	int		len_nbrf;

	lenght_base = ft_strlen(base);
	len_nbrf = lenght_nbr(nbr, base);
	nb = nbr;
	i = 0;
	if (nb < 0)
	{
		nbrf[0] = '-';
		nb *= -1;
		i = 1;
	}
	len_nbrf--;
	while (nb >= lenght_base)
	{
		nbrf[len_nbrf] = base[nb % lenght_base];
		nb /= lenght_base;
		len_nbrf--;
	}
	if (nb < lenght_base)
		nbrf[i] = base[nb];
}

int	nb_base(char str, char *base)
{
	int	nb;

	nb = 0;
	while (base[nb] != '\0')
	{
		if (str == base[nb])
			return (nb);
		nb++;
	}
	return (-1);
}

int	ft_atoi_base(char *str, char *base)
{
	int	i;
	int	minus;
	int	nb;
	int	nb2;
	int	base_lenght;

	nb = 0;
	i = 0;
	base_lenght = ft_strlen(base);
	if (base_lenght >= 2)
	{
		minus = whitespaces(str, &i);
		nb2 = nb_base(str[i], base);
		while (nb2 != -1)
		{
			nb = (nb * base_lenght) + nb2;
			i++;
			nb2 = nb_base(str[i], base);
		}
		return (nb *= minus);
	}
	return (0);
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	char	*finalnbr;
	int		nb;
	int		lenght_nbrf;
	char	*tmp;

	if (is_valid(base_to) == 0 || is_valid(base_from) == 0)
		return (0);
	nb = ft_atoi_base(nbr, base_from);
	lenght_nbrf = lenght_nbr(nb, base_to);
	tmp = (finalnbr = (char *)malloc(sizeof(char) * (lenght_nbrf + 1)));
	if (!tmp)
		return (0);
	ft_putnbr_base_v2(nb, base_to, finalnbr);
	finalnbr[lenght_nbrf] = '\0';
	return (finalnbr);
}

#include <stdio.h>
int main()
{
	printf("======ex04======\n");
		char str[5] = "";
		char base_form[10] = "abc-";
		char base_to[10] = "kbr";
		printf("%s\n", ft_convert_base(str, base_form, base_to));
}
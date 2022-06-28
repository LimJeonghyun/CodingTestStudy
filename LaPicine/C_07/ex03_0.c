#include <stdlib.h>

int		ft_len(char *str)
{
	int	count;

	count = 0;
	while (str[count])
		count++;
	return (count);
}

int		ft_all_len(char **strings, int size, char *sep)
{
	int	length;
	int	index;

	length = 0;
	index = 0;
	while (index < size)
	{
		length += ft_len(strings[index]);
		length += ft_len(sep);
		index++;
	}
	length -= ft_len(sep);
	return (length);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
    char *arr;
    int length;
    int idx;
    int i;
    int j;

    idx = 0;
    length = ft_all_len(strs, size, sep);
    arr = (char *)malloc(sizeof(char) * length + 1);
	if (!arr)
		return (0);
	i = -1;
	while (++i < size)
	{
		j = 0;
		while (strs[i][j])
			arr[idx++] = strs[i][j++];
		j = 0;
		while (sep[j] && i < size - 1)
			arr[idx++] = sep[j++];
	}
	arr[idx] = '\0';
	return (arr);
}

#include <stdio.h>
int main()
{
	printf("======ex03======\n");
		char *strs[] = {"hello","4242", "world","gaeon", "nojam"};
		char sep[10] = " : ";
		int	size = 5;
		printf("%s\n", ft_strjoin(size, strs, sep));
}
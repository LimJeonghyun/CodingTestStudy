#include <stdlib.h>

int		ft_len(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strcpy(char *dest, char *src)
{
	int index;

	index = 0;
	while (src[index] != '\0')
	{
		dest[index] = src[index];
		index++;
	}
	dest[index] = '\0';
	return (dest);
}

int		ft_length(char **strings, int size, char  *sep)
{
	int	final_length;
	int	index;

	final_length = 0;
	index = 0;
	while (index < size)
	{
		final_length += ft_len(strings[index]);
		final_length += ft_len(sep);
		index++;
	}
	final_length -= ft_len(sep);
	return (final_length);
}

char *ft_strjoin(int size, char **strs, char *sep)
{
	char *arr;
	char *tmp;
    int length;
    int i;

    if (size == 0){
        return ((char *)malloc(sizeof(char)));
    }
    length = ft_length(strs, size, sep);
    if (!(arr = (char *)malloc(sizeof(char) * length + 1)))
		return (0);
	tmp = arr;
    i = 0;
    while (i < size)
    {
        ft_strcpy(tmp, strs[i]);
        tmp += ft_len(strs[i]);
        if (i < size - 1){
            ft_strcpy(tmp, sep);
            tmp += ft_len(sep);
        }
        i++;
    }
    *tmp = '\0';
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
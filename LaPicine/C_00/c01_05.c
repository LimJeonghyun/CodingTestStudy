#include <unistd.h>
#include <stdio.h>

void	ft_putstr(char *str)
{
    char c;
	while (*str != '\0')
	{
        c = *str;
        write(1,&c,1);
		str++;
	}
}

int		main(void)
{
	char str[] = "Hello, world!";
	char *p_str;

	p_str = str;
	ft_putstr(p_str);
}
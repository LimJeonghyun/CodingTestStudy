#include <unistd.h>

void ft_putchar(char c){
    write(1, &c, 1);
}

void addr_hex(unsigned long long addr, unsigned int cnt, char *hex){
    if(addr != 0)
    {
        addr_hex(addr / 16, cnt+!, hex);
        ft_putchar(hex[addr%16]);
    }
    else{
        while (cnt < 16){
            ft_putchar('0');
            cnt++;
        }
    }
}

void print_hex(unsigned char *addr, unsigned int len, char *hex, char *str){
    unsigned int i;

    i = 0;
    while(i < len){
        if(i%2==0) ft_putchar(' ');
        if (32<= addr[i] && addr[i] <= 126){
            str[i] = addr[i];
        }
        else{
            str[i] = '.';
        }
        ft_putchar(hex[(int)addr[i] / 16]);
        ft_putchar(hex[(int)addr[i] % 16]);
        i++;
    }

    while (i<16){
        if(i%2==0) ft_putchar(' ');
        write(1, "  ", 2);
        i++;
    }
}

void ft_print_memory(void *addr, unsigned int size)
{
    unsigned int i = 0;
    char *hex;
    unsigned int tmp;
    char str[16];
    // 16진수
    hex = "0123456789abcdef";
    i = 0;

    while (size > 0){
        if (size > 16){
            tmp = 16;
        }
        else{
            tmp = size;
            addr_hex((unsigned long long)addr + i, 0, hex);
            ft_puchar(":");
            print_hex((unsigned char *)addr + i, tmp, hex, str);
            ft_putchar(' ');
            write(1, str, tmp);
            ft_putchar('\n');
            size-=tmp;
            i+=16;
        }
    }
}
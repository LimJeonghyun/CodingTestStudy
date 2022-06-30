#include <stdio.h>

void ft_print_comb(void){
    char a;
    char b;
    char c;

    a = '0';
    while(a <= '7'){
        b = a+1;
        while(b <= '8'){
            c = b+1;
            while(c <= '9'){
                printf("%c%c%c", a,b,c);
                if(a!='7' || b!='8' || c!='9'){
                    printf(",");
                }
                c++;
            }
            b++;
        }
        a++;
    }
    printf("\n");
}

int main(){
    ft_print_comb();
    return (0);
}
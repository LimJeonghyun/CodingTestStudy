#include <stdio.h>

void ft_print_numbers(void){
    char num;
    num = 0;
    while (num <= '9'){
        printf("%c", num);
        num++;
    }
}

int main(){
    ft_print_numbers();
    return (0);
}
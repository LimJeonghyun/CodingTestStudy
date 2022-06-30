#include <stdio.h>

void ft_putnbr(int nb){
    if (nb == -2147483648){
        printf("-2147483648");
        return ;
    }

    if(nb < 0){
    printf("-");
    nb = -nb;
    }
    if(nb > 9){
        ft_putnbr(nb/10);
    }
    printf("%d", nb%10);
    // printf("%d", nb%10 + '0');
}
int main(){
    ft_putnbr(2147483647);
    return (0);
}
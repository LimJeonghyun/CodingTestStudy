#include <stdio.h>

void ft_is_negative(int n){
    if (n < 0){
        printf("N");
    }
    else{
        printf("P");
    }
}
int main(){
    ft_is_negative(-1);
    return (0);
}
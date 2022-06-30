#include <stdio.h>

void ft_printing(int array[], int n){
    int i;
    char c;

    i = -1;
    while(++i < n){
        c = array[i]+'0';
        printf("%c", c);
    }
    if(array[0]!=10-n) printf(", ");
}

void ft_recursive(int array[], int n, int i){
    if (i==0) array[i]=0;
    else array[i] = array[i-1]+1;

    while (array[i] < 11-n+1){
        if(i==n-1) ft_printing(array, n);
        else ft_recursive(array, n, i+1);
        array[i] = array[i]+1;
    }
}

void ft_print_combn(int n){
    int array[10];

    ft_recursive(array, n, 0);
}

int main(){
    ft_print_combn(2);
    return (0);
}
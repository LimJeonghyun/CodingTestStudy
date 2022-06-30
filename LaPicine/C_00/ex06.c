#include <stdio.h>

void comb(char a, char b){
    char c;
    char d;

    c=a;
    d=b+1;
    // else {
    //     c=a+1;
    //     d=b+1;
    // }

    while(c<='9'){
        // d = c+1;
        while(d<='9'){
            printf("%c%c %c%c", a,b,c,d);
            if(a!='9' || b!='8' || c!='9' || d!='9') printf(", ");
            d++;
        }
        d='0';
        c++;
    }
}

void ft_print_comb2(void){
    char a;
    char b;
    a='0';
    b='0';

    while(a<='9'){
        while(b<='8'){
            comb(a,b);
            b++;
        }
        b='0';
        a++;
    }

    
}

int main(){
    ft_print_comb2();
    return (0);
}
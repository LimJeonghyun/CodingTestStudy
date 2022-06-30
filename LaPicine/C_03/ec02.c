#include <stdio.h>
#include <string.h>
char *ft_strcat(char *dest, char *src){
    int idx;
    idx = 0;
    while (dest[idx]){
        idx++;
    }
    while (*src){
        dest[idx] = *src;
        src++;
        idx++;
    }
    return dest;
}

int main(){
    printf("======ex02======\n");
		char src[10] = "gaeon";
		char dest0[20] = "hello ";
		char dest1[20] = "hello ";
		char src1[10] = "hi";
		char dest2[20] = "bonjour ";
		char dest3[20] = "bonjour ";
		printf("%s %s\n", strcat(dest0, src), ft_strcat(dest1, src));
		printf("%s %s\n", strcat(dest2, src1), ft_strcat(dest3, src1));
}
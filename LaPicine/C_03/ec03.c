#include <stdio.h>
#include <string.h>
char *ft_strncat(char *dest, char *src, unsigned int nb){
    int idx;
    idx = 0;
    while (dest[idx]){
        idx++;
    }
    while(*src && nb > 0){
        dest[idx] = *src;
        idx++;
        src++;
        nb--;
    }
    return dest;
}

int main(){
    printf("======ex03======\n");
		char src[10] = "gaeon";
		char dest0[20] = "hello ";
		char dest1[20] = "hello ";
		char src1[10] = "hello";
		char dest2[20] = "bonjour ";
		char dest3[20] = "bonjour ";
		printf("%s - %s\n", strncat(dest0, src, 8), ft_strncat(dest1, src, 8));
		printf("%s - %s\n", strncat(dest2, src1, 2), ft_strncat(dest3, src1, 2));

        char dest[20] = "123";
	char src0[] = "4567890";
	unsigned int nb = 8;

	printf("-----\ndest = %s\nsrc = %s\nnb = %d\n", dest, src0, nb);
	ft_strncat(dest, src0, nb);
	printf("result = %s\n-----\n", dest);
}
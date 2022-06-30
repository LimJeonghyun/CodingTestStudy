#include <stdio.h>
#include <string.h>
int ft_strlen(char *str){
    int i = 0;
    while (str[i]){
        i++;
    }
    return i;
}

unsigned int ft_strlcat(char *dest, char *src, unsigned int size){
    int dest_c;
    int src_c;
    int i;
    if (size <= ft_strlen(dest)) return (size + ft_strlen(src));
    dest_c = ft_strlen(dest);
    while(*src && dest_c + 1 <size){
        dest[dest_c] = *src;
        src++;
        dest_c++;
    }
    dest[dest_c] = '\0';
    return (ft_strlen(dest) + ft_strlen(src));
}  
int main(){
    printf("======ex05======\n");
		char src[10] = "gaeon";
		char src1[10] = "42";
		char dest[10] = "hello";
		char dest1[10] = "hello";
		char dest2[10] = "hi";
		char dest3[10] = "hi";
		printf("%lu %u - %s = %s\n", strlcat(dest, src, 3), ft_strlcat(dest1, src, 3), dest, dest1);
		printf("%lu %u - %s = %s\n", strlcat(dest, src, 10), ft_strlcat(dest1, src, 10), dest, dest1);
		printf("%lu %u - %s = %s\n", strlcat(dest2, src1, 5), ft_strlcat(dest3, src1, 5), dest2, dest3);

        char			str0[50];
	char			str1[50];
	char			str2[] = "Concatenando 1";
	unsigned int	tamanho1;
	unsigned int	tamanho2;

	str0[0] = 'O';
	str0[1] = 'l';
	str0[2] = 'a';
	str0[3] = '\0';

	str1[0] = 'O';
	str1[1] = 'l';
	str1[2] = 'a';
	str1[3] = '\0';

	tamanho1 = ft_strlcat(str0, str2, 3);
	tamanho2 = strlcat(str1, str2, 3);
	printf("String final: %s, Tamanho: %d", str0, tamanho1);
	printf("\nString final: %s, Tamanho: %d", str1, tamanho2);
}
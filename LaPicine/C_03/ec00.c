#include <stdio.h>
#include <string.h>
int ft_strcmp(char *s1, char *s2){
    int i;
    i = 0;

    while (s1[i] && s2[i] && s1[i] == s2[i]){
        i ++;
    }
    return (s1[i]-s2[i]);
}

int main(){
    printf("======ex00======\n");
		char s1[10] = "abcdefg ";
		char s2[10] = "abcdefg";
		char s3[10] = "   ";
		char s4[10] = "gdcxf";
		printf("%d %d\n", strcmp(s1, s2), ft_strcmp(s1, s2));
		printf("%d %d\n", strcmp(s3, s4), ft_strcmp(s3, s4));
}
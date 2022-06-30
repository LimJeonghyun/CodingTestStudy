#include <stdio.h>
#include <string.h>
//kmp알고리즘

char *ft_strstr(char *str, char *to_find){
    int idx;
    int x;

    idx = 0;
    if (to_find[0]=='\0') return str;
    while(str[idx]){
        x = 0;
        while(str[idx+x] == to_find[x] && str[idx+x]!= '\0'){
            if(to_find[x+1] == '\0') return (&str[idx]);
            x++;
        }
        idx++;
    }
    return 0;
}

int main(){
    printf("======ex04======\n");
		char str[20] = "abcabcabcdabc";
		char to_find[20] = "abcd";
		char str1[20] = "hello hello";
		char to_find1[20] = "o h";
        // printf("%s %s\n", strstr(str, to_find), strstr(str1, to_find1));
		printf("%s %s\n", strstr(str, to_find), ft_strstr(str, to_find));
		printf("%s %s\n", strstr(str1, to_find1), ft_strstr(str1, to_find1));
}
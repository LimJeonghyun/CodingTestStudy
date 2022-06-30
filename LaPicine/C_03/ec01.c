#include <string.h>
#include <stdio.h>
int ft_strncmp (char *s1, char *s2, unsigned int n){
    unsigned int	c;
	int				diff;

	c = 0;
	diff = 0;
	while ((c < n) && !diff && (s1[c] != '\0') && (s2[c] != '\0'))
	{
		diff = (unsigned char)s1[c] - (unsigned char)s2[c];
		c++;
	}
	if (c < n && !diff && (s1[c] == '\0' || s2[c] == '\0'))
		diff = (unsigned char)s1[c] - (unsigned char)s2[c];
	return (diff);
}

int main(){
    printf("======ex01======\n");
		char s1[10] = "abcdefg ";
		char s2[10] = "abcdefg";
		char s3[10] = "   ";
		char s4[10] = "gdcxf";
		printf("%d %d\n", strncmp(s1, s2, 6), ft_strncmp(s1, s2, 6));
		printf("%d %d\n", strncmp(s1, s2, 7), ft_strncmp(s1, s2, 7));
		printf("%d %d\n", strncmp(s3, s4, 1), ft_strncmp(s3, s4, 1));

        char s7[] = "Nada a ver";
	char s5[] = "Teste de Comparacao";
	char s6[] = "Teste";

	printf("s12: %d, s21: %d, s13: %d, s31: %d, s23: %d, s32: %d", ft_strncmp(s5, s6, 5), ft_strncmp(s6, s5, 5), ft_strncmp(s7, s6, 5), ft_strncmp(s6, s7, 5), ft_strncmp(s5, s6, 5), ft_strncmp(s6, s5, 5));
	printf("\n\ns12: %d, s21: %d, s13: %d, s31: %d, s23: %d, s32: %d", strncmp(s7, s5, 5), strncmp(s5, s7, 5), strncmp(s7, s6, 5), strncmp(s6, s5, 5), strncmp(s5, s6, 5), strncmp(s6, s5, 5));

}
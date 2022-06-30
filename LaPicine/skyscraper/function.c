int ft_strlen(char *str)
{
    int count;
    int i;

    count = 0;
    i = 0;
    while(str[i]){
        if(str[i] >= '0' && str[i] <= '9'){
            count++;
        }
        i++;
    }
    return count;
}

int ft_sqrt(int num)
{
    int i;
    i = 1;
    // 사이즈가 4~9? 1~9?

    while (i <= 9){
        if(i*i == num) return i;
        i++;
    }
    return 0;
}

// free 함수1, 2
void ft_free1(int ***arr, int size){
    int i = 0;
    while(i < size){
        free((*arr)[i]);
        i++;
    }
    free(*arr);
}

void ft_free2(int **arr){
    free((*arr));
}
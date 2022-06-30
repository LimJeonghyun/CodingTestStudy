void get_floor(char **str, int **floor){
    int i;
    int j;
    i=0;
    j=0;
    
    while(str[0][i]){
        // printf("%c\n", str[0][i]);
        if(str[0][i]>'0' && str[0][i]<= '9'){
            (*floor)[j] = (str[0][i]-'0');
            // printf("=%d=", (*floor)[j]);
            j++;
        }
        i++;
    }
}


// call by reference
void make_size(int ***arr, int size){
    int i, j;
    for(i=0; i<size; i++)
    {
        for(j=0; j<size; j++)
        {
            (*arr)[i][j] = 0;
        }
    }
    // 체크용
    // i = 0;
    // j=0;
    // printf("===============================");
    //  while(i < size){
    //     while(j < size){
    //         printf("%c", (*arr)[i][j]);
    //         j++;
    //     }
    //     printf("\n");
    //     i++;
    //     j=0;
    // }
    // printf("===============================");
 
    // for(i=0; i<size; i++)
    // {
    //     for(j=0; j<wisizdth; j++)
    //     {
    //         printf("%3d", (*arr)[i][j]);
    //     }
    //     printf("\n");
    // }           
}
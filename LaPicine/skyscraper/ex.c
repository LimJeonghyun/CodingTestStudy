#include<stdio.h>
#include<stdlib.h>
 
int height=6;
int width=8;
int sub(int*** arr); //삼중 포인터로 인자 받음 
int sub(int*** arr)  //Call By Reference이기 때문에 삼중 포인터를 사용한다.
{    
    
    int i,j;
    for(i=0; i<height; i++)
    {
        for(j=0; j<width; j++)
        {
            (*arr)[i][j] = i+10;
        }
    }
 
    for(i=0; i<height; i++)
    {
        for(j=0; j<width; j++)
        {
            printf("%3d", (*arr)[i][j]);
        }
        printf("\n");
    }                                                    
 
    for(i=0; i<height; i++)
    {
        free((*arr)[i]);
    }
    free(*arr);
 
    return 0;
}
int main(void)
{
    int **arr;
    int i,j;
    arr=(int**)malloc(sizeof(int*)*height); //행을 만든다고 생각하자
    for(i=0; i<height; i++)
    {
        arr[i] = (int*)malloc(sizeof(int)*width); //열을 만든다고 생각하자
    }
    sub(&arr);
    return 0;
}

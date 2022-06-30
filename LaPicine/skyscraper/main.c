#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "check.c"
#include "function.c"
#include "complete.c"

void display(int ***board, int len){
    int i;
    int j;
    char c;
    i=0;
    j=0;
    while (i < len){
        while(j < len){
            c = (*board)[i][j] + '0';
            write(1, &c, 1);
            write(1, " ", 1);
            j++;
        }
        j=0;
        i++;
        write(1, "\n", 1);
    }
}

int main(int ac, char **av)
{
    int **board;
    int *floor;
    int i;
    int len;
    
    i = -1;
    if (check(ac, av)==0) 
        return 0; // 2개의 arg있는지 체크
    len = ft_sqrt(ft_strlen(av[1])); // 4*4, 5*5인지 체크
    if (len == 0) 
        return 0; // 크기가 다르면 종료
    // printf("len:%d\n", len); //<< 체크용
    floor = (int *)malloc(sizeof(int)*(len*len));
    get_floor(&av[1], &floor); // 입력받은 숫자
    board = (int **)malloc(sizeof(int*)*len); // 입력할 판 저장공간 확보
    while(++i <= len)
        board[i] = (int *)malloc(sizeof(int)*len);
    make_size(&board, len); // 초기값 설정
    i = 0;
    int j=0;
    //  while(floor[j]){
        // while(j < len*len){
            // printf("%d", floor[j]);
            // j++;
    //     // // }
    //     // printf("\n");
    //     i++;
    //     // j=0;
    // }
    if(solve(&board, &floor, 0, len)==1) 
        display(&board, len);
    else 
        write(1, "error\n", 6);
    ft_free1(&board, len);
    ft_free2(&floor);
    // free됐는지 체크
    return 0;
}   
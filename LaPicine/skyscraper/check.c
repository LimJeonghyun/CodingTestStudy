#include <unistd.h>
int check(int ac, char **av){
    if (ac != 2) return 0;
    return 1;
}

int check_row_left(int ***board, int pos, int **floor, int len)
{
	int i;
	int max;
	int count;

	i = 0;
	max = 0;
	count = 0;
	if (pos % len == len - 1)
	{
		while (i < len)
		{
			if ((*board)[pos / len][i] > max)
			{
				max = (*board)[pos / len][i];
				count++;
			}
			i++;
		}
		if ((*floor)[(len * 2) + pos / len] != count)
			return (1);
	}
	return (0);
}

int check_row_right(int ***board, int pos, int **floor, int len)
{
	int i;
	int max_size;
	int visible_towers;

	i = len;
	max_size = 0;
	visible_towers = 0;
	if (pos % len == len - 1)
	{
		while (--i >= 0)
		{
			if ((*board)[pos / len][i] > max_size)
			{
				max_size = (*board)[pos / len][i];
				visible_towers++;
			}
		}
		if ((*floor)[(len * 3) + pos / len] != visible_towers)
			return (1);
	}
	return (0);
}

int check_col_down(int ***board, int pos, int **floor, int len)
{
	int i;
	int max;
	int count;

	i = len - 1;
	max = 0;
	count = 0;
	if (pos / len == len - 1)
	{
		while (i >= 0)
		{
			if ((*board)[i][pos % len] > max)
			{
				max = (*board)[i][pos % len];
				count++;
			}
			i--;
		}
		if ((*floor)[len + pos % len] != count)
			return (1);
	}
	return (0);
}

int check_col_up(int ***board, int pos, int **floor, int len)
{
	int i;
	int max;
	int count;

	i = 0;
	max = 0;
	count = 0;
	if (pos / len == len - 1)
	{
		while (i < len)
		{
			if ((*board)[i][pos % len] > max)
			{
				max = (*board)[i][pos % len];
				count++;
			}
			i++;
		}
		if ((*floor)[pos % len] != count)
			return (1);
	}
	return (0);
}

int check_double(int ***board, int pos, int num, int len)
{
    int i;
    i = -1;
    //  printf("%d", pos);
    while(++i < pos / len){
        if((*board)[i][pos % len] == num) 
            return 1;
    }
    i = -1;
    while(++i < pos % len){
        if((*board)[pos / len][i]==num) 
            return 1;
    }
    return 0;
}


int check_case(int ***board, int pos, int **floor, int len){
    if( (board, pos, floor, len)== 1) 
    {
        printf("%d", pos);
        return 1;
    }
    if(check_row_right(board, pos, floor, len) == 1) 
    {
         printf("%d", pos);
        return 1;
    }
    if(check_col_down(board, pos, floor, len) == 1) 
    {
        return 1;
    }
    if(check_col_up(board, pos, floor, len) ==1) 
    {
         printf("%d", pos);
        return 1;
    }
    return 0;
}

int solve(int ***board, int **floor, int pos, int len){
    int size;
    int i;
    
    // fill5(char ***board, char **floor, int pos, int len);
    if(pos == (len*len)) 
        return 1;
    size = 0;
    i = 0;
    while(++size <= len){
        // printf("%d", size);
        printf("h");
        if(check_double(board, pos, size, len)==0){
            (*board)[pos/len][pos%len] = size;
            printf("e");
            if (check_case(board, pos+1, floor, len) == 1){
                printf("r");
                if(solve(board, floor, pos+1, len) == 1) 
                    printf("e");
                    return 1;
            }
            else
                (*board)[pos/len][pos%len] = 0;
                printf("?");
        }
        printf("%d", size);
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
        printf("\n");
        i++;
        size = (i + '0');

    }
    printf("whit");
    return 0;
}
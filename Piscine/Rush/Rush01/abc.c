//#include <stdio.h>
#include <unistd.h>

#define N 4

int ft_atoi(char *str)
{
    int n;

    n = (*str - '0');
    return (n);
}

int changing_arr_to_int(char ** av)
{
    int arr[4][N] = {{0, 0, 0, 0},
                     {0, 0, 0, 0},
                     {0, 0, 0, 0},
                     {0, 0, 0, 0}};
    int i;
    int j;
    int n;

    n = 0;
    i = 0;
    while (i < 4)
    {
        j = 0;
        while (j < N)
        {
            arr[i][j] = ft_atoi(&av[1][n]);
            //printf("%d", arr[i][j]); it will show if its working.
            j ++;
            n += 2;
        }
        //write(1, "\n", 1); the new line after all row
        i ++;
    }
    return (**arr);
}

int main(int ac, char **av)
{
    //"4 3 2 1 1 2 2 2 4 3 2 1 1 2 2 2" example of numbers in arr[4][N]
    changing_arr_to_int(av);
}


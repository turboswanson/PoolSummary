#include <stdio.h>
#include <stdlib.h>

#define N 3
#define M 3

void input(int **arr);
void output(int **arr);
void transposition(int **arr);
void ft_free(int **arr);

int main(void)
{
    int **arr = malloc(N*sizeof(int*));

    for(int i = 0; i < N;i++)
    {
        *(arr+i) = malloc(M*sizeof(int));
    }

    if(arr == NULL){
        printf("n/a");

        return 0;
    }

    input(arr);
    output(arr);    
    transposition(arr);
    ft_free(arr);    
    
    return 0;
}

void input(int **arr)
{
    int x = 1;

    for(int i = 0; i < N;i++)
    {
        for(int j = 0; j < M;j++)
        {
            *(*(arr+i)+j) = x;
            x++;
        }
    }
}

void transposition(int **arr)
{
for(int i = 0; i < N;i++)
    {
        for(int j = 0; j < M;j++)
        {
            printf("%d ",**(arr+j)+i);
        }
            printf("\n");

    }

}

void output(int **arr)
{
for(int i = 0; i < N;i++)
    {
        for(int j = 0; j < M;j++)
        {
            printf("%d ",**(arr+i)+j);
        }
            printf("\n");

    }

    printf("\n");

}

void ft_free(int **arr)
{
    for(int i = 0; i < N;i++)
    {
        free(arr[i]);
    }
    free(arr);
}
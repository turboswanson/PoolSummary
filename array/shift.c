#include <stdio.h>
#define NMAX 10

void left(int *arr, int n);
void right(int *arr, int n);
void output(int *arr);

int main(void)
{
    int a = 0;
    
    printf("Input 1 - to make a left shift or 2 - to make a right shift:");
    scanf("%d",&a);

    int n = 0;
    printf("Input a number of steps:");
    scanf("%d",&n);

    int arr[NMAX];
    int x = 1;

    for(int i = 0; i < NMAX; i++)
    {
        arr[i] = x;
        x++;
    }

    switch(a)
    {
        case 1 : left(arr,n);
        case 2: right(arr,n);
    }

    output(arr);

    return 0;    
}

void left(int *arr,int n)
{   
    for(int i = 0; i < n; i++)
    {   
        int tmp = *arr;

        for(int i = 0; i < NMAX;i++)
        {
            *(arr+i) = *(arr+i+1);
        }

        *(arr+NMAX-1) = tmp;
    }
}

void right(int *arr, int n)
{   for(int i = 0; i < n; i++)
    {
        int tmp = *(arr+NMAX-1);

        for(int i = NMAX-1;i >= 0;i--)
        {
            *(arr+i) = *(arr+i-1);
        }

        *arr = tmp;
    }
}

void output(int *arr)
{
    for(int i = 0; i < NMAX;i++)
    {
        printf("%d",*(arr+i));

        if(i != NMAX - 1)
        {
            printf("%c",32);
        }
    }
}
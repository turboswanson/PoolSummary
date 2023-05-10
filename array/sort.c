#include <stdio.h>

void input(int n, int *arr, int *flag);
void sort(int n, int *arr);
void output(int n, int *arr);

int main(void)
{
    int n = 0;
    
    if (scanf("%d",&n) != 1)
    {
        printf("n/a");

        return 0;
    }

    int arr[n];
    int flag = 0;

    input(n,arr,&flag);

    if(flag)
    {
        printf("n/a");

        return 0;
    }

    sort(n,arr);
    output(n,arr);
}

void input(int n, int *arr,int *flag)
{
    for(int i = 0; i < n; i++)
    {
        if(scanf("%d",arr+i) != 1)
        {
            *flag = 1;
        }
    }
}

void sort(int n, int*arr)
{
    for(int i = 0; i < n; i++)
    {
        for(int k = i + 1; k < n; k++)
        {
            if(*(arr+k) < *(arr+i))
            {
                int tmp = *(arr+i);
                *(arr+i) = *(arr+k);
                *(arr+k) = tmp;
            }
            
        }
    }
}

void output(int n, int *arr)
{
    for(int i = 0; i < n; i++)
    {
        printf("%d",*(arr+i));

        if(i != n -1)
        {
            printf("%c",32);
        }
    }
}

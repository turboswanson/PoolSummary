//на входе количество чисел в последовательности на выходе последовательность из квадратов этих чисел
#include <stdio.h>

void input(int n, int *arr, int*flag);
void output(int n, int*arr);

int main(void)
{
    int n = 0;
    if(scanf("%d", &n) != 1)
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
   
    output(n,arr);

  
    return 0;    
}

void input(int n, int *arr,int *flag){

     for(int i = 0; i < n; i++)
    {
        if (scanf("%d",arr+ i) != 1)
        {
           *flag = 1;            
        }
    }
}

void output(int n, int *arr)
{
      for(int i = 0; i < n;i++)
    {
        *(arr+i) = *(arr+ i) * *(arr+i);
        printf("%d",*(arr+i));

        if(i != n -1)
        {
            printf(" ");
        }
    }
}

#include <stdio.h>

int fibo(int x);

int main(void)
{
    int n = 0;
    scanf("%d",&n);
    printf("%d",fibo(n));
}

int fibo(int x)
{
    if(x == 1 || x == 2)
    {
        return 1;
    }

    return fibo(x-1) + fibo(x-2);
}

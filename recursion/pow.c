#include <stdio.h>

int power(int a,int x);

int main(void)
{
    int a = 0;
    int x = 0;
    scanf("%d %d",&a,&x);

    printf("%d",power(a,x));
}

int power(int a,int x)
{
    if (x > 0)
    {
        return a*power(a,x-1);
    }

    return 1;
}

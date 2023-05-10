#include <stdio.h>

void maxmin(int *a, int *b, int *c,int *max, int * min);

int main(void)
{   
    //на входе три цифры, вывести на экран мин и макс значение
    int a = 0,b = 0, c = 0;
    if(scanf("%d%d%d",&a,&b,&c) !=3)
    {
        printf("n/a");

        return 0;
    }
    
    else
    {
        int max = 0, min = 0;

        maxmin(&a,&b,&c,&max,&min);

        printf("%d %d", max, min);
    }

    return 0;
    
}

void maxmin(int *a, int *b, int *c,int *max, int * min)
{
    *max = *min = *a;

    if(*b > *max)
    {
        *max = *b;
    }

    if(*b < *min)
    {
        *min = *b;
    }

    if(*c > *max)
    {
        *max = *c;
    }

    if(*c < *min)
    {
        *min = *c;
    }

}

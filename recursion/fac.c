#include <stdio.h>

int fac(int n);

int main(void)
{
    int n = 0;
    scanf("%d",&n);

    printf("%d",fac(n));

    return 0;
}

int fac(int x){
    if(x == 1)
    {
        return 1;
    }
    
    return x*fac(x-1);
}

#include <stdio.h>

int main(void)
{
    int x = 0;
    scanf("%d",&x);

    int div = 2;
    int count = 0;

    while(x != 1)
    {   
        if(x % div == 0)
        {
            while(x % div == 0)
            {
                 x /= div;
                count++;
            }

            if(count > 1){
                printf("%d^%d ",div,count);
            }
            else{
                printf("%d ",div);
            }
        }
        count = 0;
        div++;
    }
    
}
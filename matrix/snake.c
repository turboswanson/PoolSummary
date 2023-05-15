#include <stdio.h>

int main(void)
{
    int n = 0;
    int m = 0;

    scanf("%d %d",&n,&m);

    int mx[n][m];

    int x = 1;

    //horizontal

    for(int i = 0; i < n;i++)
    {
        if(i % 2 ==0)
        {
            for(int j = 0; j < m;j++)
            {
                mx[i][j] = x;
                x++;
            }
        }

        else{
            for(int j = m-1;j>=0;j--)
            {
                mx[i][j] = x;
                x++;
            }
        }
    }

    for(int i = 0; i < n;i++)
    {
        for(int j = 0; j < m; j++)
        {
            printf("%d ",mx[i][j]);
        }
        printf("\n");
    }

printf("\n");

// vertical
x = 1;

 for(int i = 0; i < m;i++)
    {
        if(i % 2 ==0)
        {
            for(int j = 0; j < n;j++)
            {
                mx[j][i] = x;
                x++;
            }
        }

        else{
            for(int j = n-1;j>=0;j--)
            {
                mx[j][i] = x;
                x++;
            }
        }
    }

       for(int i = 0; i < n;i++)
    {
        for(int j = 0; j < m; j++)
        {
            printf("%d ",mx[i][j]);
        }
        printf("\n");
    }


return 0;
}
#include <stdio.h>

int main(void)
{
    int n = 0, m = 0;
    scanf("%d %d",&n,&m);
    int mx1[n][m];
    int mx2[n][m];
    int mx3[n][m];

    int x = 1;

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m;j++)
        {
            mx1[i][j] = x;
            x++;
        }
    }

    x = 1;

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m;j++)
        {
            mx2[i][j] = x;
            x++;
        }
    }

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m;j++)
        {
            mx3[i][j] = mx1[i][j] + mx2[i][j];
            x++;
        }
    }

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m;j++)
        {
            printf("%d ",mx3[i][j]);
        }

        printf("\n");
    }

    return 0;
}
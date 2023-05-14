#include <stdio.h>

int main(){
    int n = 0;
    int m = 0;

    scanf("%d%d",&n,&m);

    int a[n][m];
    int x = 1;

    for(int i = 0; i < n;i++){
        for(int k = 0; k < m;k++){
           a[i][k]=x;
            x++;
        }
    }

    int b[n][m];
    x = 1;

     for(int i = 0; i < n;i++){
        for(int k = 0; k < m;k++){
            b[i][k]=x;
            x++;
        }
    }

    int c[n][m];

    for(int i = 0; i < n; i++){
        for(int k = 0; k < m; k++){
            c[i][k] = 0;
            for(int j = 0; j < m; j++){
                c[i][k] +=a[i][j]*b[j][k];
            }
        }
    }

    for(int i = 0; i < n;i++){
        for(int k = 0; k < m;k++){
            printf("%d ",c[i][k]);
        }
        printf("\n");
    }

    return 0;

}
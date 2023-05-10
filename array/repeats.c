//убрать повторы из массива, длина которого неизвестна

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int *arr = (int*)malloc(1*sizeof(int));
    char c;
    int n = 0;

    while(1)
    {
        scanf("%d%c",arr+n,&c);
        n++;
        arr = realloc(arr,(n+1)*sizeof(int));

        if (c == '\n')    
        {
            break;
        }
              
    }

     for(int i = 0;i < n;i++){
        for(int k = i+1;k < n;k++){
            if(*(arr+i) == *(arr+k)){
                for(int j = k; j < n - 1;j++){
                    *(arr+j) = *(arr+j+1);
                }
                n--;
                k--;
            }
        }
    }

    for(int i = 0; i < n;i++){
        printf("%d",*(arr+i));

        if (i != n -1)
        {
            printf("%c",32);
        }
    }


    
    free(arr);

    return 0;    
}
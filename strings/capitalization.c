//сделать первые буквы введенной строки заглавными,при этом заранее неизвестно количество символов в строке

#include <stdio.h>
#include <stdlib.h>

// int main(void)
// {
//     char c;
//     int flag = 1;

//     while((c = getchar()) != '\n')
//     {   
//         if(flag)
//         {
//         putchar(c-32);
//         flag = 0;
//         }
//         else if(c == 32)
//         {
//             flag = 1;
//             putchar(c);
//         }
//         else{
//             putchar(c);
//         }
//     }

//     return 0;
// }

int main(void)
{
    char *s = malloc(1*sizeof(char));
    int n = 0;

    while(1)
    {
        scanf("%c",&s[n]);

        if(s[n] == '\n')
        {
            break;
        }
        n++;
        s = realloc(s,(n+1)*sizeof(char));
    }

    *(s+n) = '\0';

    int flag = 1;
    for(int i = 0; i < n; i++){
    if(*(s+i) == ' '){
        flag = 1;
        printf("%c",*(s+i));
    }

    else if(flag){
        printf("%c",*(s+i)-32);
        flag = 0;
    }

    else{
        printf("%c",*(s+i));

    }

    }

    free(s);

    return 0;
}
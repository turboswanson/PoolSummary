// #include <stdio.h>

// int len(char *s);

// int main(void)
// {
//    char *s = "hello";
//    printf("%d",len(s)); 

//    return 0;
// }

// int len(char *s)
// {   
//     int x = 0;
//     while(*s){
//         s++;
//         x++;
//     }

//     /*
//     while(s[x])
//     {
//         x++;
//     }
    
//     return x;*/

//     return x;
// }

#include <stdio.h>

int len(char *s);

int main(void)
{
    char *s;

    printf("%d",len(s));
}

int len(char *s)
{
    char c;
    int x = 0;
    while((c = getchar()) != '\n'){
        x++;
    }

    return x;
}
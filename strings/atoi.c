#include <stdio.h>
#include <stdlib.h>

int main()
{   
    // char -> int
    int i = 0;
    char c[10] = "567";
    i = atoi(c);
    printf("%d",i);
    printf("\n");

    // int -> char
    char s[10];
    int x = 345;

    sprintf(s,"%d",x);
    printf("%c",s[0]);

    return 0;
}
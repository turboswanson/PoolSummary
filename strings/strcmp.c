#include <stdio.h>
int f_strcmp(char *s1, char *s2);

int main(void)
{
    char *s1 = "H";
    char *s2 = "h";

    printf("%d",f_strcmp(s1,s2));

    return 0;
}

int f_strcmp(char *s1, char *s2)
{
    while(*s1 && (*s1 == *s2))
    {
        s1++;
        s2++;
    }

    return *s1-*s2;
}

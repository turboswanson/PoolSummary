#include <stdio.h>
#include <stdlib.h>

void input(char *s);
void output(char *s);
int f_strlen(char *s);
void f_strcpy(char *s,char *str);

int main(void)
{
    char *s = malloc(1*sizeof(char));

    input(s);

    int len = f_strlen(s);

    char str[len];
    f_strcpy(s,str);

    output(s);

    free(s);
}

void input(char *s)
{
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
}

int f_strlen(char *s)
{
    int len = 0;
    while(*s)
    {
        s++;
        len++;
    }

    return len;
}

void f_strcpy(char *s,char *str)
{   int x = 0;

    while(*s)
    {
        *str = *s;
        s++;
        str++;
        x++;
    }
    *(str+x) = '\0';
}

void output(char *s)
{
    printf("%s",s);
}
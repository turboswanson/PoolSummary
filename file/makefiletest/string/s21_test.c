#include "s21.h"

int main(void)  
{   
   
    #ifdef STRLEN
    char *s = "The priceless value of the useless knowledge";
    printf("%s  -  %d",s,f_strlen(s));
    #endif

    #ifdef STRCMP
    char *s1 = "hello";
    char *s2 = "hellO";
    printf("%s - %s - %d",s1,s2,f_strcmp(s1,s2));
    #endif

    return 0;
}
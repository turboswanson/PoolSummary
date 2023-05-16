
/*Sample Input:

a high explosive bomb is one
that employs a process called detonation
to rapidly release its chemical energy

Sample Output:

detonation 10

CTRL + D TO FINISH INPUT
*/

#include <stdio.h>
#include <string.h>

int main(void)
{
int max = 0;
int len = 0;
 char s[1001];
 char s2[1000];

    while(1 == scanf("%1000s", s)) {
        while(s[len]){
            len++;
        }
        if(len > max){
            strcpy(s2,s);
            max = len;
        }
        len = 0;
    }

    printf("%s %d",s2,max);
   

    return 0;
}
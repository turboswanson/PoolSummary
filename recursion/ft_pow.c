#include <stdio.h>
int rec_pow(int n,int pow){
    if (pow==1){
        return 0;
    }
    return 1+rec_pow(n,pow/n);
}
int main(void){
    int n=3;
    int pow=9;
    int res = rec_pow (n,pow);
    printf("%d",res);
}
#include <stdio.h>

int main(){
    FILE * fin = fopen("data.txt","r");
    FILE * fout = fopen("out.txt","w");

    int n = 0;
    fscanf(fin,"%d",&n);

    int sum = 0;

    for(int i = 0; i < n; i++ ){
        int x = 0;
        fscanf(fin,"%d",&x);
        sum += x;
    }

    fprintf(fout,"%d",sum);

    fclose(fin);
    fclose(fout);

    return 0;
}
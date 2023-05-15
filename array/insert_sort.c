#include <stdio.h>
#define N 10

void input(int *arr, int *flag);
void insert_sort(int * arr);
void output(int *arr);

int main(){
    int arr[N];
    int flag = 0;
    input(arr, &flag);

    if(flag == 1){
        printf("n/a");

        return 0;
    }

    insert_sort(arr);
    output(arr);
    
    return 0;

}

void input(int *arr, int *flag){
    int a;
    for(int i = 0;i < N;i++){
        if(scanf("%d.%d",(arr+i),&a) != 1){
            *flag = 1;
         
        }
    }
}

void insert_sort(int * arr){
    for(int i = 1;i < N;i++){
        int k = i;

        while(k > 0 && *(arr+k-1) > *(arr + k)){
            int tmp;
            tmp = *(arr+k-1);
            *(arr+k-1) = *(arr + k);
            *(arr + k) = tmp;
            k--;
        }
    }
}

void output(int *arr){
    for(int i= 0 ;i < N-1;i++){
        printf("%d ",*(arr+i));
    }
    printf("%d",*(arr+N-1));
}
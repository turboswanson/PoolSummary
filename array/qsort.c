#include <stdio.h>
#define NMAX 10

void qsort(int *, int, int);
void input(int *, int *);
void output(int *);

int main(void) {
    int data[NMAX], flag;

    flag = 0;
    input(data, &flag);
    // if (flag == 1) {
    //     printf("n/a");
    // } else {
    //     qsort(data, 0, NMAX);
    //     output(data);
    //     // printf("\n");
    //     // output(data);
    // }
    qsort(data,0,NMAX);
    // output(data);

    return (0);
}

void input(int *data, int *flag) {
    int k;
    for (int i = 0; i < NMAX; i++) {
        if (scanf("%d.%d", (data + i), &k) != 1) {
            *flag = 1;
        }
    }
}

void qsort(int *data, int low, int high) {
    int i = low;   // left
    int j = high;  // right;
    int y = 0;
    int z = *(data + (low + high) / 2);

    while (i <= j) {
        while (*(data + i) < z) {
            i++;
        }
        while (*(data + j) > z) {
            j--;
        }
        if (i <= j) {
            y = *(data + i);
            *(data + i) = *(data + j);
            *(data + j) = y;
            i++;
            j--;
          
        }
          output(data);
            printf("\n");
    }
    
    if (low < j) {
        qsort(data, low, j);
    }
    if (i < high) {
        qsort(data, i, high);
    }
}

void output(int *data) {
    for (int i = 0; i < NMAX - 1; i++) {
        printf("%d ", *(data + i));
    }
    printf("%d", *(data + NMAX - 1));
}

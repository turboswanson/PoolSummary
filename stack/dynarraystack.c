#include <stdio.h>
#include <stdlib.h>

#define N 5 // на сколько элементов будет изменяться размер стека

typedef struct 
{
    int *arr; // место для хранения данных
    int n; //количество данных в стеке
    int size; //емкость стека
}Stack;

void init(Stack *st);
void push(Stack *st, int x);
int pop(Stack *st);
int is_full(Stack *st);
void print(Stack *st);
Stack * create();
void destroy(Stack *st);

int main(void)
{  
    
    Stack *st = create(); // иницилиазируем стек,выделяя память не только под динамический массив, но и под структуру Stack
    
    printf("full: %s\n",is_full(st) ? "YES" : "NO");
    push(st,3);
    push(st,5);
    push(st,7);
    push(st,9);
    push(st,11);
    print(st);
    printf("full: %s\n",is_full(st) ? "YES" : "NO"); // Стек заполнился, при добавлении следующего элемента в массив, выделится память под еще N элементов 
    push(st,13);
    print(st);
    printf("full: %s\n",is_full(st) ? "YES" : "NO");
    push(st,15);
    push(st,17);
    push(st,21);
    push(st,23);
    print(st);
    printf("full: %s\n",is_full(st) ? "YES" : "NO");
    push(st,25);
    printf("full: %s\n",is_full(st) ? "YES" : "NO");
    print(st);


    destroy(st); // освобождаем память

    return 0;
}

void init(Stack *st)
{
    st->n = 0;
    st->size = N;
    st->arr = malloc(st->size*sizeof(int));
}

void push(Stack *st, int x)
{   
    if(is_full(st))
    {
        st->size += N;
        st->arr = realloc(st->arr,st->size * sizeof(int));
    }

    st->arr[st->n] = x;
    st->n++;
}

int pop(Stack *st){
    int res = st->arr[st->n-1];
    st->n--;

    return res;
}

int is_full(Stack *st)
{
    return st->n == st->size;
}

void print(Stack *st)
{
    for(int i = 0; i < st->n; i++)
    {
        printf("%d ",st->arr[i]);
    
    }
    printf("\n");
}

Stack * create()
{
    Stack *st = malloc(sizeof(Stack));
    init(st);

    return st;
}

void destroy(Stack *st)
{
    if(st != NULL)
    {
        free(st->arr);
        free(st);
    }
}

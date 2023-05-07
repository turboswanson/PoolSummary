#include <stdio.h>
#define N 5

typedef struct 
{
    int arr[N]; //место для данных
    int n; //количество данных
}Stack;

void init(Stack *st);
void print(Stack*st);
void push (Stack *st, int x);
int pop(Stack *st);
int is_empty(Stack *st);
int is_full(Stack *st);

int main(void)
{
    Stack s; //создаем стек
    Stack *st = &s; // создаем указатель на стек

    init(st); //инициализация стека

    printf("empty: %s\n",is_empty(st) ? "YES":"NO"); // проверяем,пустой ли стек

    push(st,3); //добавляем 3 в стек
    push(st,7); //добавляем 7 в стек
    push(st,11); //добавляем 11 в стек
   
    print(st); //печатаем стек

    printf("empty: %s\n",is_empty(st) ? "YES":"NO"); // проверяем,пустой ли стек

    printf("full: %s\n",is_full(st) ? "YES" : "NO"); // проверяем, полон ли стек

    push(st,15);
    push(st,17);

    print(st);

    printf("full: %s\n",is_full(st) ? "YES" : "NO"); // проверяем, полон ли стек
        
    for(int i = N-1; i >=0;i--)
    {
    printf("pop: %d\n",pop(st)); //достаем из верхнее значение из стека
    print(st);// печатаем стек и смотрим, что осталось
    }

    printf("empty: %s\n",is_empty(st) ? "YES":"NO"); // проверяем,пустой ли стек
    
}

void init(Stack *st)
{
    st->n = 0;
}

void push (Stack *st, int x)
{
    st->arr[st->n] = x;
    st->n++;
}

int pop(Stack *st){
    int res = st->arr[st->n-1];
    st->n--;

    return res;
}


void print(Stack*st)
{
    for(int i = 0; i < st->n; i++)
    {
        printf("%d",st->arr[i]);

        if(i < st->n-1)
        {
            printf("%c",32);
        }
    }
    printf("\n");
}

int is_empty(Stack *st)
{
    return st->n == 0;
}

int is_full(Stack *st)
{
    return st->n == N;
}

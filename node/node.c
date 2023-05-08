#include <stdio.h>
#include <stdlib.h>

typedef struct Node
{
	int data;
	struct Node *next;
}Node;

void push(Node **plist,int x);
void print(Node *list);
int size (Node *list);
int is_empty(Node *list);
void pop(Node **plist);

int main(void)
{
	Node *list = NULL;

	int test[] = {3,7,11,21};

	for(int i = 0; i < 4; i++)
	{
		push(&list,test[i]);
		// print(list);
	}

	printf("EMPTY: %s\n", is_empty(list) ? "YES" : "NO");

	while( ! is_empty(list))
	{
		pop(&list);
		print(list);
	}
 
	printf("EMPTY: %s\n", is_empty(list) ? "YES" : "NO");

	return 0;
}

void push(Node **plist,int x)
{
	Node *p = malloc(sizeof(Node));
	p->data = x;
	p->next = *plist;
	*plist = p;

}

void print(Node *list)
{
	Node *p = list;

	while(p != NULL){
		printf("%d ",p->data);
		p = p->next;
	}
	printf("\n");
}

int size (Node *list)
{
	int n = 0;

	for(Node *p = list; p != NULL;p= p->next)
	{
		n++;
	}
	return n;
}

int is_empty(Node *list)
{
	return size(list) == 0;
}

void pop(Node **plist)
{
	Node * p = *plist;
	*plist = p->next;
	free(p);
}
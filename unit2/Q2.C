#include <stdio.h>
#include <conio.h>
#include <alloc.h>

struct stack
{
	int data;
	struct stack *next;
};

struct stack* push(struct stack*, int);
struct stack* pop(struct stack*);
void display(struct stack*);

int main()
{
	int ch, n;
	struct stack *top;

	clrscr();
	top = NULL;
	while(1)
	{
		printf("[Stack using Linked list]\n"
		"1.Push\n2.Pop\n3.Display\n4.Exit\n=> ");
		scanf("%d", &ch);
		switch(ch)
		{
			case 1:
				printf("Enter data to insert: ");
				scanf("%d", &n);
				top = push(top, n);
				break;
			case 2:
				top = pop(top);
				break;
			case 3:
				display(top);
				break;
			case 4:
				return 0;
			default:
				printf("Error: Invalid Option!\n");
		}
		printf("\n");
	}
}

struct stack* push(struct stack *top, int n)
{
	struct stack *r;

	r = (struct stack*)malloc(sizeof(struct stack));
	r->data = n;
	r->next = top;
	top = r;
	return top;
}

struct stack* pop(struct stack *top)
{
	struct stack *q;

	if(top != NULL)
	{
		q = top;
		top = q->next;
		printf("%d is popped off the stack\n", q->data);
		free(q);
	}
	else
		printf("Error: Stack Underflow!\n");
	return top;
}

void display(struct stack *top)
{
	struct stack *q;

	printf("The stack: \n");
	for(q = top; q != NULL; q = q->next)
		printf("%d\n", q->data);
}
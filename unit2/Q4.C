#include <stdio.h>
#include <conio.h>
#include <alloc.h>

struct queue
{
	int data;
	struct queue *next;
} *rear, *front;

void insert(int);
void delete();
void display();

int main()
{
	int ch, n;

	clrscr();
	rear = front = NULL;
	while(1)
	{
		printf("[Queue using Linked list]\n"
		"1.Insert\n2.Delete\n3.Display\n4.Exit\n=> ");
		scanf("%d", &ch);
		switch(ch)
		{
			case 1:
				printf("Enter data to insert: ");
				scanf("%d", &n);
				insert(n);
				break;
			case 2:
				delete();
				break;
			case 3:
				display();
				break;
			case 4:
				return 0;
			default:
				printf("Error: Invalid Option!\n");
		}
		printf("\n");
	}
}

void insert(int n)
{
	struct queue *r;

	r = (struct queue*)malloc(sizeof(struct queue));
	r->data = n;
	r->next = NULL;
	if(rear != NULL)
	{
		rear->next = r;
		rear = r;
	}
	else
		rear = front = r;
}

void delete()
{
	struct queue *q;

	if(front != NULL)
	{
		q = front;
		front = q->next;
		printf("%d is deleted from the queue\n", q->data);
		free(q);
		if(front == NULL)
			rear = NULL;
	}
	else
		printf("Error: Empty Queue\n");
}

void display()
{
	struct queue *q;

	printf("The Queue: \n");
	for(q = front; q != NULL; q = q->next)
		printf("%d\n", q->data);
}

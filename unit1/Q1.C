#include <stdio.h>
#include <conio.h>
#include <alloc.h>

struct node* createList();
void displayList(struct node*);

struct node
{
	int data;
	struct node *next;
};


int main()
{
	int ch;
	struct node *p;

	clrscr();
	while(1)
	{
		printf("[Linked List Program]\n\n");
		printf("1.Create\n2.Display\n3.Exit\n=> ");
		scanf("%d", &ch);

		switch(ch)
		{
			case 1:
				p = createList();
				break;
			case 2:
				displayList(p);
				break;
			case 3:
				exit(0);
			default:
				printf("Invalid Option\n\n");
		}
	}
}

struct node* createList()
{
	int i, n;
	struct node *p, *q, *r;

	printf("Enter number of nodes: ");
	scanf("%d", &n);
	p = (struct node*)malloc(sizeof(struct node));
	printf("Enter node data: ");
	scanf("%d", &p->data);
	q = p;
	for(i = 0; i < n-1; ++i)
	{
		r = (struct node*)malloc(sizeof(struct node));
		printf("Enter node data: ");
		scanf("%d", &r->data);
		r->next = NULL;
		q->next = r;
		q = r;
	}
	return p;
}

void displayList(struct node *p)
{
	printf("The linked list: \n");
	for(; p != NULL; p = p->next)
		printf("%d->", p->data);
	printf("X\n\n");
}
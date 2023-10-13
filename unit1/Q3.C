#include <stdio.h>
#include <conio.h>
#include <alloc.h>

struct node* createList(int);
struct node* insertStart(struct node*, int);
struct node* insertMiddle(struct node*, int, int);
struct node* insertEnd(struct node*, int);
void displayList(struct node*);

struct node
{
	int data;
	struct node *next;
};


int main()
{
	int ch, n, d;
	struct node *p;

	clrscr();
	p = NULL;
	while(1)
	{
		printf("[Linked List Program]\n");
		printf("1.Create\n"
		"2.Insert at the start\n"
		"3.Insert at the middle\n"
		"4.Insert at the end\n"
		"5.Display\n6.Exit\n=> ");
		scanf("%d", &ch);
		switch(ch)
		{
			case 1:
				printf("Enter number of nodes: ");
				scanf("%d", &n);
				p = createList(n);
				break;
			case 2:
				printf("Enter node data: ");
				scanf("%d", &n);
				p = insertStart(p, n);
				break;
			case 3:
				printf("Enter predecessor's node data: ");
				scanf("%d", &d);
				printf("Enter node data: ");
				scanf("%d", &n);
				p = insertMiddle(p, d, n);
				break;
			case 4:
				printf("Enter node data: ");
				scanf("%d", &n);
				p = insertEnd(p, n);
				break;
			case 5:
				displayList(p);
				break;
			case 6:
				return 0;
			default:
				printf("Invalid Option\n");
		}
		printf("\n");
	}
}

struct node* createList(int n)
{
	int i;
	struct node *p, *q, *r;

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

struct node* insertMiddle(struct node *p, int d, int n)
{
	struct node *q, *r;

	r = (struct node*)malloc(sizeof(struct node));
	r->data = n;
	r->next = NULL;
	if(p != NULL)
	{
		for(q = p; q->data != d; q = q->next)
			;
		if(q == NULL)
			printf("Error: Node with %d doesn't exit\n", d);
		else
		{
			r->next = q->next;
			q->next = r;
		}
		return p;
	}
	else
		return r;
}

struct node* insertStart(struct node *p, int n)
{
	struct node *r;

	r = (struct node*)malloc(sizeof(struct node));
	r->data = n;
	r->next = NULL;
	if(p != NULL)
		r->next = p;
	return r;
}

struct node* insertEnd(struct node *p, int n)
{
	struct node *q, *r;

	r = (struct node*)malloc(sizeof(struct node));
	r->data = n;
	r->next = NULL;
	if(p != NULL)
	{
		for(q = p; q->next != NULL; q = q->next)
			;
		q->next = r;
		return p;
	}
	else
		return r;
}

void displayList(struct node *p)
{
	printf("The linked list: \n");
	for(; p != NULL; p = p->next)
		printf("%d->", p->data);
	printf("X\n");
}
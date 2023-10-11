#include <stdio.h>
#include <conio.h>
#include <alloc.h>

struct node* createList(int);
struct node* insertStart(struct node*, int);
void insertMiddle(struct node*, int);
struct node* insertEnd(struct node*, int);
void displayList(struct node*);

struct node
{
	int data;
	struct node *next;
};


int main()
{
	int ch, n;
	struct node *p;

	clrscr();
	p = NULL;
	while(1)
	{
		printf("\n[Linked List Program]\n");
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
				scanf("%d", &n);
				insertMiddle(p, n);
				break;
			case 4:
				printf("Enter node data: ");
				scanf("%d", &n);
				insertEnd(p, n);
				break;
			case 5:
				displayList(p);
				break;
			case 6:
				return 0;
			default:
				printf("Invalid Option\n\n");
		}
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

void insertMiddle(struct node *p, int n)
{

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
	struct node *r;

	r = (struct node*)malloc(sizeof(struct node));
	r->data = n;
	r->next = NULL;

	if(p != NULL)
	{
		for(; p->next != NULL; p = p->next)
			;
		p->next = r;
	}
	return r;
}

void displayList(struct node *p)
{
	printf("The linked list: \n");
	for(; p != NULL; p = p->next)
		printf("%d->", p->data);
	printf("X\n");
}
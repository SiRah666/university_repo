#include <stdio.h>
#include <conio.h>
#include <alloc.h>

struct node* createList(int);
struct node* reverseList(struct node*);
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
	while(1)
	{
		printf("\n[Linked List Program]\n");
		printf("1.Create\n2.Reverse\n3.Display\n4.Exit\n=> ");
		scanf("%d", &ch);
		switch(ch)
		{
			case 1:
				printf("Enter number of nodes: ");
				scanf("%d", &n);
				p = createList(n);
				break;
			case 2:
				p = reverseList(p);
				break;
			case 3:
				displayList(p);
				break;
			case 4:
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

struct node* reverseList(struct node *p)
{
	struct node *a, *b, *c;

	b = p;
	a = NULL;
	c = b->next;
	while(b->next != NULL)
	{
		b->next = a;
		a = b;
		b = c;
		c = c->next;
	}
	b->next = a;
	p = b;
	return p;
}

void displayList(struct node *p)
{
	printf("The linked list: \n");
	for(; p != NULL; p = p->next)
		printf("%d->", p->data);
	printf("X\n");
}
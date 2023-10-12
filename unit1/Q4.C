#include <stdio.h>
#include <conio.h>
#include <alloc.h>

struct node* createList(int);
struct node* deleteStart(struct node*);
struct node* deleteMiddle(struct node*, int);
struct node* deleteEnd(struct node*);
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
		printf("[Linked List Program]\n");
		printf("1.Create\n"
		"2.Delete from the start\n"
		"3.Delete from the middle\n"
		"4.Delete from the end\n"
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
				p = deleteStart(p);
				break;
			case 3:
				printf("Enter data of node to delete: ");
				scanf("%d", &n);
				p = deleteMiddle(p, n);
				break;
			case 4:
				p = deleteEnd(p);
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

struct node* deleteStart(struct node *p)
{
	struct node *q;

	if(p != NULL)
	{
		q = p;
		p = p->next;
		free(q);
	}
	else
		printf("Error: List empty!\n");
	return p;
}

struct node* deleteMiddle(struct node *p, int n)
{
	struct node *q, *r;

	if(p != NULL)
	{
		for(q=p, r=p->next; r->data != n; q=r, r=r->next)
			if(r == NULL)
				break;

		if(r == NULL)
			printf("Error: node with %d doesn't exist", n);
		else
		{
			q->next = r->next;
			free(r);
		}
	}
	else
		printf("Error: List empty!\n");
	return p;
}

struct node* deleteEnd(struct node *p)
{
	struct node *q, *r;

	if(p != NULL)
	{
		q = p;
		r = p->next;

		for(q=p, r=p->next; r->next != NULL; q=r, r=r->next)
			;
		q->next = NULL;
		free(r);
	}
	else
		printf("Error: List empty!\n");
	return p;
}

void displayList(struct node *p)
{
	printf("The linked list: \n");
	for(; p != NULL; p = p->next)
		printf("%d->", p->data);
	printf("X\n");
}
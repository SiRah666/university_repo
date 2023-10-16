#include <stdio.h>
#include <conio.h>

struct node
{
	int data;
	struct node *next;
};

struct node* createList(int);
struct node* insertNodeBeginning(struct node *, int);
struct node* insertNodeMiddle(struct node*, int, int);
struct node* insertNodeEnd(struct node*, int);
struct node* deleteNodeBeginning(struct node*);
struct node* deleteNodeMiddle(struct node*, int);
struct node* deleteNodeEnd(struct node*);
void displayList(struct node*);

int main()
{
	struct node *p;

	p = NULL;
	clrscr();
/*	p = createList(4);
	displayList(p);
*/
	p = deleteNodeEnd(p);
	displayList(p);
	getch();
	return 0;
}

struct node* deleteNodeBeginning(struct node *p)
{
	struct node *q;

	if(p != NULL)
	{
		q = p;
		p = q->next;
		printf("Deleting node with data %d...\n", q->data);
		free(q);
	}
	else
		printf("Error: List empty!\n");
	return p;
}

struct node* deleteNodeMiddle(struct node *p, int n)
{
	struct node *q, *r;

	if(p != NULL)
	{
		for(q=p; (q!=NULL && q->next->data!=n); q=q->next)
			;
		if(q == NULL)
			printf("Node with data %d doesn't exist!\n", n);
		else
		{
			r = q->next;
			q->next = r->next;
			printf("Deleting node with data %d...\n", n);
			free(r);
		}
	}
	else
		printf("Error: List empty!\n");
	return p;
}

struct node* deleteNodeEnd(struct node *p)
{
	struct node *q;

	if(p != NULL)
	{
		for(q=p; (q->next!=NULL) && (q->next->next!=NULL); q=q->next)
			;
		printf("Deleting node with data %d\n", q->next->data);
		free(q->next->next);
		q->next = NULL;
	}
	else
		printf("Error: List empty!\n");
	return p;
}

struct node* insertNodeBeginning(struct node *p, int n)
{
	struct node *q;

	q = (struct node*)malloc(sizeof(struct node));
	q->data = n;
	q->next = p;
	return q;
}

struct node* insertNodeMiddle(struct node *p, int x, int n)
{
	struct node *q, *r;

	r = (struct node*)malloc(sizeof(struct node));
	r->data = n;
	r->next = NULL;

	if(p != NULL)
	{
		for(q = p; (q!=NULL) && (q->data!=x); q = q->next)
			;
		if(q == NULL)
			printf("Node with %d doesn't exist", x);
		r->next = q->next;
		q->next = r;
		return p;
	}
	return r;
}

struct node* insertNodeEnd(struct node *p, int n)
{
	struct node *q, *r;

	r = (struct node*)malloc(sizeof(struct node));
	r->data = n;
	r->next = NULL;

	if(p != NULL)
	{
		for(q=p; q->next != NULL; q=q->next)
			;
		q->next = r;
		return p;
	}
	return r;
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

void displayList(struct node *p)
{
	printf("The linked list: \n");
	for(; p != NULL; p = p->next)
		printf("%d->", p->data);
	printf("X\n");
}
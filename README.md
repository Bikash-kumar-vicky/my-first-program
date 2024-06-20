#include<stdio.h>
#include<conio.h>
#include<malloc.h>

typedef struct list
{
	int data; 
	struct list * add ;
} 
node;
node*head = NULL;
node*front = NULL * rear = NULL;

void enque()
{
	node * new node;
	new node = (node *) malloc(size of(node));
	if(newnode== null)
{
	printf("\n memory allocation failed");
	return;
}

printf("\n enter element");
scanf("%d",&newnode->data);
new node -> add = null;
if(head == null)
{
	head  = new node;
	front = new node;
	rear  =  new node;
}
return;
rear -> add= new node;
rear->new node;

}
void dequeue()
{
	if(head == null)
	{
		printf("\n deletion can not be perform";)
		return;
	}
if(front == rear)
{
	head = null;
	front = null;
	rear = null; 
	return ;
}
else{
	head = head-> add;
	font = head;
}

printf("\n one element deleted");

void display
{
	node * pappu
	pappu = front;
	if(front == null)
{
	print("\n list empty");
	return;
	}
while(pappu != null)
{
	print( "%d", pappu ->data);
	pappu = pappu -> add;
}




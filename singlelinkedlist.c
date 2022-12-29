
#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node*next;
};
struct node *head,*tail=NULL;
void create()
{
	int i,n,ele;
	printf("enter the no.of nodes to be created\n");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
	printf("enter the elements to be inserted in SLL\n");
	scanf("%d",&ele);
	addNode(ele);
	}
}
void addNode(int data)
{
	struct node*newNode=(struct node*)malloc(sizeof(struct node));
	newNode->data=data;
	newNode->next=NULL;
	if(head==NULL)
	{
	head=newNode;
	tail=newNode;
	}
else
	{
	tail->next=newNode;
	tail=newNode;
	}
}
void display()
{	
	struct node*current=head;
	if(head=NULL)
	{
	printf("list is empty\n");
	return;
	}
		printf("nodes of single linked list:\n");
		while(current!=NULL)
		{
		printf("%d",current->data);
		current=current->next;
		}
	printf("\n");
}
void search()
{
	struct node*ptr;
	int item,i=0,flag=0,loc;
	ptr=head;
	if(ptr==NULL)
	{
		printf("\n empty list\n");
	}
	else
	{
	printf("\n enter the item which you want to search?\n");
	scanf("%d",&item);
	while(ptr!=NULL)
	{
		if(ptr->data==item)
		{
		printf("item found at location %d",i+1);
		flag=1;
		}
		i++;
	ptr=ptr->next;
	}
		if(flag==0)
		{
		printf("item not found \n");
		}
	}
}
int main()
{
	int choice;
	while(1)
	{
	printf("\n SLL operation\n");
	printf("\t 1. create a SLL  stack of n integers");
	printf("\t 2. display a SLL");
	printf("\t 3.linear search");
	printf("\t 4.exit");
	printf("\n enter your choice:");
	scanf("%d",&choice);
	switch(choice)
	{
	case 1: create();
	break;
	case 2: display();
	break;
	case 3: search();
	break;
	case 4: return 0;
	default:printf("\n enter a valid choice \n");
	}
	}
return 0;
}






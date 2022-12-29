
#include<stdio.h>
#include<stdlib.h>
struct node
{
	char ssn[10],name[10],dept[15],desg[10],phNo[15];
	int sal;
	struct node*link;
	struct node*rlink;
};
typedef struct node*NODE;
	NODE temp,FIRST=NULL,END=NULL;
	NODE getnode()
	{
		NODE x;
		x=(NODE)malloc(sizeof(struct node));
		return x;
	}
void read()
{
	temp=getnode();
	temp->link=NULL;
	temp->rlink=NULL;
	printf("enter ssn:");
		scanf("%s",temp->ssn);
	printf("enter name:");
		scanf("%s",temp->name);
	printf("enter Dept:");
		scanf("%s",temp->dept);
	printf("enter designation:");
		scanf("%s",temp->desg);
	printf("enter phoneNo:");
		scanf("%s",temp->phNo);
	printf("enter salary:");
		scanf("%s",temp->sal);
	return;
}
void create_DLL()
{
	int n,i=1;
	printf("enter the no,of employees\n");
	scanf("%d",&n);
	while(i<=n)
	{
		printf("enter the details of the %d employee\n",i++);
		read();
		if(FIRST==NULL)
		{
		FIRST=temp;
		END=temp;
		}
		else
		{
	END->rlink=temp;
	temp->link=END;
	END=temp;
		}
	}
}
void display_count()
{
	temp=FIRST;
	int count=1;
	printf("employee details:\n");
	if(FIRST==NULL)
	{
		printf("employee details is NULL and count is %d\n",count-1);
	}
	else
	{
		while(temp!=END)
		{
		count++;
		printf("%s\t%s\t%s\t%s\t%s\t%d\n",temp->ssn,temp->name,temp->dept,temp->desg,temp->phNo,temp->sal);
		temp=temp->rlink;
		}
		printf("%s\t%s\t%s\t%s\t%s\t%d\n",temp->ssn,temp->name,temp->dept,temp->desg,temp->phNo,temp->sal);
		printf("employee count is %d\n",count);
		}
	return;
	}

void Insertionfront()
{
	printf("enter the details of the employee\n");
	read();
	if(FIRST==NULL)
	FIRST=temp;
	else
	{
	temp->rlink=FIRST;
	FIRST->link=temp;
	FIRST=temp;
	}
}
void Insertionend()
{
	printf("enter the details of the  new employee\n");
	read();
	if(FIRST==NULL)
	{
		FIRST=temp;
		END=temp;
	}
	else
	{
		END->rlink=temp;
		temp->link=END;
		END=temp;
	}
return;
}
void Deletionfront()
{
	temp=FIRST;
	if(FIRST==NULL)
	{
		printf("list is empty\n");
	}
	else if(FIRST==END)
	{
		printf("DELETED ELEMENT IS %s\n",temp->ssn);
		FIRST=NULL;
		END=NULL;
		free(temp);
	}
	else
	{
	printf("deleted element is %s\n",temp->ssn);
	FIRST=FIRST->rlink;
	FIRST->link=NULL;
	free(temp);
	}
return;
}
void Deletionend()
{
	temp=END;
	if(FIRST==NULL)
	{
		printf("list is empty\n");
	}
	else if(FIRST==END)
	{
		printf("deleted element is %s\n",temp->ssn);
		FIRST=NULL;
		END=NULL;
		free(temp);
	}
	else
	{
	printf("deleted element is %s\n",temp->ssn);
	END=END->link;
	END->rlink=NULL;
	free(temp);
	}
	return;
}
void main()
{
	int choice;
	while(1)
	{
	printf("---------MENU---------\n");
	printf("1.create a DLL of N employees\n");
	printf("\n2.display DLL");
	printf("\n3.insertion at front");
	printf("\n4.insertion at end");
	printf("\n5.deletion at front");
	printf("\n6.deletion at end");
	printf("\n7.exit");
	printf("---------------------\n");
	printf("enter your choice:\n");
	scanf("%d",&choice);
	switch(choice)
	{
		case 1: create_DLL();
		break;
		case 2: display_count();
		break;
		case 3:Insertionfront();
		break;
		case 4:Insertionend();
		break;
		case 5:Deletionfront();
		break;
		case 6:Deletionend();
		break;
		case 7:return;
		default:printf("Invalid choice\n");
	}
	}	
}









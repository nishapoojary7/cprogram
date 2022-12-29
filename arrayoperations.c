
#include<stdio.h>
int array[100],i,n,position,m;

void create()
{

	printf("Enter the number of elements in array :");
	scanf("%d",&n);
	printf("Enter %d elements\n",n); 
	for(i=0;i<n;i++)
	scanf("%d",&array[i]);
}		
void display()			
{				
		
	printf(" elements of of array are\n");
	for(i=0;i<n;i++)
	printf(" element %d at %d position \n",array[i],i);
}
void insert_pos()
{
int ele;
printf("enter the valid position where you wish to insert the element:");
scanf("%d",&position);
if(position>=n+1)
printf("insertion is not possible\n");
else
{
printf("enter the element:");
scanf("%d",&ele);
for(i=n-1;i>=position;i--)
array[i+1]=array[i];
array[position]=ele;
}
}
void delete_pos()
{
printf("enter the valid position where you wish to delete the element:");
scanf("%d",&position);
if(position>=n+1)
printf("deletion is not possible\n");
else
{
for(i=position;i<=n-1;i++)
array[i]=array[i+1];
}
}
int main()
{
	int ch;
	while(1)
	{
	printf("\n 1.creating an N integer elements");
	printf("\n 2.Display the array elements");
	printf("\n 3. inserting at a given valid position");
	printf("\n 4. deleting at a given valid position");
	printf("\n 5.Exit");
	printf("\n enter your choice:");
	scanf("%d",&ch);			
	switch(ch)
	{	
	case 1:create();
		break;
	case 2:display();
		break;
	case 3:insert_pos();	
		break;
	case 4:delete_pos();
		break;		
	case 5:return 0;
		default:printf("\n Invalid choice \n");
	}	
	}
	return 0;
	}




#include<stdio.h>
#include<stdlib.h>
struct node
{
int info;
struct node*llink;
struct node*rlink;
};
typedef struct node*NODE;
NODE getnode()
{
NODE x;
x=(NODE)malloc(sizeof(struct node));
return x;
}
NODE insert(int item,NODE root)
{
NODE temp,cur,prev;
int i;
temp=getnode();
temp->info=item;
temp->llink=temp->rlink=NULL;
if(root==NULL)
{
root=temp;
return root;
}
else
{
prev=NULL;
cur=root;
while(cur!=NULL)
{
prev=cur;
cur=(temp->info<cur->info)?cur->llink:cur->rlink;
}
if(temp->info<prev->info)
prev->llink=temp;
else if(temp->info>prev->info)
prev->rlink=temp;
return root;
}
}
void pre(NODE PRE)
{
if(PRE!=NULL)
{
printf("%d\t",PRE->info);
pre(PRE->llink);
pre(PRE->rlink);
}
}
void in(NODE IN)
{
if(IN!=NULL)
{
in(IN->llink);
printf("%d\t",IN->info);
in(IN->rlink);
}
}
void post(NODE POST)
{
if(POST!=NULL)
{
post(POST->llink);
post(POST->rlink);
printf("%d\t",POST->info);
}
}
void traversal(NODE root)
{
NODE IN,PRE,POST;
IN=root;
PRE=root;
POST=root;
if(root==NULL)
{
printf("tree is empty\n");
return;
}
printf("\n\n preorder traversal....\n");
pre(PRE);
printf("\n\nin order traversal.....\n");
in(IN);
printf("\n\npostorder traversal.....\n");
post(POST);
}

NODE search(NODE root)
{
int item,i=0;
NODE cur;
printf("enter the element to be searched\n");
scanf("%d",&item);
if(root==NULL)
{
printf("tree is empty\n");
return root;
}
cur=root;
while(cur!=NULL)
{
if(item==cur->info)
{
i++;
printf("found key %d in tree\n",cur->info);
}
if(item<cur->info)
cur=cur->llink;
else
cur=cur->rlink;
}
if(i==0)
printf("key not found\n");
return root;
}
void main()
{
int choice,item,n;
NODE root =NULL;
while(1)
{
printf("\n-----------menu----\n");
printf("\n\t1-create bst of n integer\n");
printf("\t2-traversal\n");
printf("\t3-search\n");
printf("\t4-exit\n");
printf("\t enter your choice:");
scanf("%d",&choice);
switch(choice)
{
case 1:printf("\n enetr number of elements:");
scanf("%d",&n);
while(n>0)
{
printf("enter the item to be inserted\n");
scanf("%d",&item);
root=insert(item,root);
n--;
}
break;
case 2:traversal(root);
break;
case 3:search(root);
break;
case 4:return;
default: printf("\n\t\n invalid choice....\n");
}
}
}

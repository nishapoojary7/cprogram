#include<stdio.h>
#define MAXSIZE 5
int stack[MAXSIZE];
int top=-1;
void push(void);
void pop(void);
void display(void);
void main()
{
int choice;
while(1)
{
printf("STACK OPERATION \n");
printf("\t 1. push");
printf("\t 2. pop");
printf("\t 3. display");
printf(" \t 4. exit");
printf("\n enter your choice:");
scanf("%d",&choice);
switch(choice)
{
case 1:push();
break;
case 2:pop();
break;
case 3:display();
break;
case 4:return;
default:printf("\n enter a valid choice");
}
}
}
void push()
{
int c;
if(top==(MAXSIZE-1))
{
printf("\n stack over flow\n");
return;
}
else
{
printf("enter the element to be pushed\n");
scanf("%d",&c);
stack[++top]=c;
}
return;
}
void pop()
{
if(top==-1)
{
printf("\n stack underflow\n");
return;
}
else
{
printf("poped element is=%d\n",stack[top--]);
}
}
void display()
{
int i;
if(top==-1)
{
printf("\n stack underflow\n");
return;
}
else
{
printf("\n the elements of stack are\n");
for(i=top;i>=0;i--)
printf("%d\n",stack[i]);
}
}
#include<stdio.h>
int a,b,c;
void main()
{
    void add();
    a=10;
    b=20;
    add();
    printf("%d",c);
}
void add()
{
    c=a+b;
}
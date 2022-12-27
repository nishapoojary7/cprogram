#include<stdio.h>
int array[100],i,n,m,position;
void create()
{
    printf("Enter the no.of elements in array:");
    scanf("%d",&n);
    printf("Enter %d elements\n",n);
    for(i=0;i<n;i++)
    scanf("%d",&array[i]);
}
void display()
{
    printf("Elements of the array are\n");
    for(i=0;i<n;i++)
    printf("Element %d at %d position\n",array[i],i );
}
int main()
{
    int ch;
    while(1)
    {
        printf("\n 1.creating an array of N integer elements");
        printf("\n 2. display of array elements");
        printf("\n 3. exit");
        printf("\n enter your choice:");
        scanf("%d",&ch);
        switch(ch)
        {
             case 1:create();
            break;
            case 2:display();
            break;
         case 3:return 0;
            default:printf("\n invalid choice\n");
        }
    }
    return 0;
        }
    

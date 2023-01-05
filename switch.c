#include<stdio.h>
int main()
{
    int i=1;
    switch(i-2)
    {
        case -1:
        printf("coding\n");
        case 0:
        printf("singing\n");
        case 1:
        printf("gardening\n");
        default:
        printf("all the above\n");
    }
    return 0;
}
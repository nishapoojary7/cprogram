#include<stdio.h>
void main()
{
    char ch;
    printf("enter the character\n");
    scanf("%c",&ch);
    if(ch=="a"|| ch=="e" ||ch=="i" ||ch=="o" ||ch=="u" ||ch=="A" ||ch=="E" ||ch=="I" ||ch=="O" ||ch=="U");
    {
    printf("\n%c is a vowel",ch);
    }
    else
    {
    
    printf("\n%c is not a vowel",ch);
}
}
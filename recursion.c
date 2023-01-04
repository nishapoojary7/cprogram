#include<stdio.h>
long int.bintodec(long int num)
{
    if(num<10) return num;
    else return(num%10+bintodec(num/10)*2);
}
int main()
{
    long int b,d;
    printf("enter the binary numbers:");
    scanf("%ld",&b);
    d=bintodec(b);
    printf("decimal equivalent of %ld is %ld\n",b,d);
}
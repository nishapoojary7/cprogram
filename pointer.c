#include<stdio.h>
#include<math.h>
int main()
{
    float real[30],sum,mean,var,sd;
    int n,i;
    float *ptr;
    printf("enter the number of elements");
    scanf("%d",&n);
    printf("emter the array elements\n");
    for(i=0;i<n;i++)
    scanf("%f",&real[i]);
    sum=0;
    ptr=real;
    for(i=0;i<n;i++,ptr++)
    sum=sum+*ptr;
    mean=sum/n;
    var=0;
    ptr=real;
    for(i=0;i<n;i++,ptr++)
    var=var+pow((*ptr-mean),2);
    sd=sqrt(var);
    printf("sum=%f\n mean=%f\n variance=%f\n standard deviation=%f\n",sum,mean,var,sd);
    return 0;
}


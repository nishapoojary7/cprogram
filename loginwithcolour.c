#include<stdio.h>
#include<conio.h>
#include<string.h>
void yellow(){
printf("\033[1;33m");
}
void reset(){
printf("\033[0m");
}
void main()
{

char u[10],p[10],user[]="nisha",pas[]="coding";int ch;
int n=1;
printf("\n  enter username and password");
while(n<=5)
{
printf("\n username:");
scanf("%s",&u);
printf("\n password:");
scanf("%s",&p);
if(strcmp(user,u)==0 && strcmp(pas,p)==0)
{
printf("\n Login Successfull!");
break;
}
else
{
n++;
printf("\n the username or password is incorrect.only %d trials left.",6-n);
}
}
if(n==6)
{
printf("\n you have used maximum attempts(5).please try later.");
}
yellow();
printf("\n ==============================================================================\n ********           WELCOME           *********\n ============================================================================== \n");
reset();
printf("FEATURES \n");
printf("1 .Create a new account \n");
printf("2 .Withdraw ammount \n");
printf("3 .ATM card applications \n");
printf("4 .Check balance \n");
printf("5 .Passbook and cheque book facility \n");
printf(" Enter your interest \n");
scanf("%d",&ch);
switch(ch)
{
case 1:printf("1. Create a new account");
break;
case 2:printf("2. Withdraw ammount ");
break;
case 3:printf("3. ATM card applications");
break;
case 4:printf("4. Check balance ");
break;
case 5:printf("5. Passbook and Cheque book facility");
break;
}
}
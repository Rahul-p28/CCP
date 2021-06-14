#include<stdio.h>
#include<conio.h>
int main()
{
 int m,n;
 clrscr();
 printf("\ enter the number m:");
 scanf("%d",&m);
 printf("\n enter the number n:");
 scanf("%d",&n);
 while(m<=n)
 {
if(m%2==0)
{
printf("%d is a even number \n",m);
 }
 m=m+1;
 }
 getch();
 return(0);
}
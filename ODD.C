#include<stdio.h>
#include<conio.h>
int main()
{
 int i,n,value,sum=0;
 clrscr();
 printf("\n enter the value for n:");
 scanf("%d",&n);
 for(i=1;i<=n;i++)
 {
 value=2*i-1;
 sum+=value*value;
 }
 printf("\n the sum of frist square %d odd numbers is:%d",n,sum);
 getch();
 return(0);
}
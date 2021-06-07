#include<stdio.h>
#include<conio.h>
int main()
{
  int num,remainder,sum=0;
  clrscr();
  printf("\n enter the number:");
  scanf("%d",&num);
  while(num>0)
  {
   remainder=num%10;
   sum=sum+remainder;
   num=num/10;
   }
   printf("\n sum ofthe numbers is %d",sum);
   getch();
   return(0);
}
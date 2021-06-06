#include<stdio.h>
#include<conio.h>
float avg(int a,int b,int c);
int main()
{
   int x,y,z;
   float average;
   clrscr();
   printf("\n enter the frist number:");
   scanf("%d",&x);
   printf("\n enter the second number:");
   scanf("%d",&y);
   printf("\n enter the third number:");
   scanf("%d",&z);
   average=avg(x,y,z);
   printf("\n the average ofthree numbers is:%.2f",average);
   getch();
   return(0);
   }
   float avg(int a,int b,int c)
   {
     float avg;
     avg=(a+b+c)/3.0;
     return(avg);
   }
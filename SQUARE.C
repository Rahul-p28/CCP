#include<stdio.h>
#include<conio.h>
int square(int a);

int main()
{
 int num,res;
 clrscr();
 printf("\n enter the number to be squared:");
 scanf("%d",&num);
 res=square(num);
 printf("\n the square of number is:%d",res);
 getch();
 return(0);
}
int square(int a)
{
  int square;
  square=a*a;
  return(square);
}
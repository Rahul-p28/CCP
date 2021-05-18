#include<stdio.h>
#include<conio.h>
void main()
{
  int num1,num2,num3;
  clrscr();
  printf("\n enter the frist number:");
  scanf("%d",&num1);
  printf("\n enter the second number:");
  scanf("%d",&num2);
  printf("\n enter the third number:");
  scanf("%d",&num3);
  if(num1>=num2 && num1>=num3)
  printf("%d is largest",num1);
  if(num2>=num1 && num2>=num3)
  printf("%d is largest",num2);
  else
  printf("%d is largest",num3);
  getch();
}
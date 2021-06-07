#include<stdio.h>
#include<conio.h>
void main()
{
  int a,b,c;
  clrscr();
  printf("\n enter the three numbers:");
  scanf("%d %d %d",&a,&b,&c);
  if(a<b&&a<c)
  printf("\n smallest number is %d",a);
  else if(b<a&&b<c)
  printf("\n smallest numberis %d",b);
  else
  printf("\n smallest number is %d",c);
  getch();
}
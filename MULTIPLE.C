#include<stdio.h>
#include<conio.h>
int main()
{
  int num,i=1;
  clrscr();
  printf("\n enter the number:");
  scanf("%d",&num);
  while(i<=100)
  {
    if(i%num==0)
    {
      printf("\n %d",i);
    }
    i=i+1;
  }
  getch();
  return(0);
}
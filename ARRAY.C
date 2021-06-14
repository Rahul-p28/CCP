#include<stdio.h>
#include<conio.h>
int main()
{
  int n,arr[50],i;
  clrscr();
  printf("\n enter the number of elements in array:");
  scanf("%d",&n);
  printf("\n the elements are:");
  for(i=0;i<n;i++)
  {
    printf("\n arr[%d]=",i);
    scanf("%d",&arr[i]);
    }
    printf("\n the array elements are:");
    for(i=0;i<n;i++)
    {
    printf("\n arr[%d]=%d",i,arr[i]);
    }
 getch();
 return(0);
}
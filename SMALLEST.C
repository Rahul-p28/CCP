#include<stdio.h>
#include<conio.h>
int main()
{
  int n,arr[30],i,smallest,position;
  clrscr();
  printf("\n enter the number of elements:");
  scanf("%d",&n);
  for(i=0;i<n;i++)
  {
   printf("\n arr[%d]=",i);
   scanf("%d",&arr[i]);
   }
   smallest=arr[0];
   position=0;
   for(i=1;i<n;i++)
   {
    if(arr[i]<smallest)
    {
    smallest=arr[i];
    position=i;
    }
    }
    printf("\n the smallest element in the array is :%d",smallest);
    printf("\n the position of the smallest element the arrayis %d ",position);
    getch();
    return(0);
}
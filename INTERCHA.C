#include<stdio.h>
#include<conio.h>
int main()
{
  int i,n,arr[25],small,large,small_pos,large_pos,temp;
  clrscr();
  printf("\n enter the number of elements in array:");
  scanf("%d",&n);
  for(i=0;i<n;i++)
  {
    printf("\n arr[%d]:",i);
    scanf("%d",&arr[i]);
  }
  small_pos=0;
  large_pos=0;
  large=arr[0];
  small=arr[0];
  for(i=0;i<n;i++)
  {
    if(arr[i]<small)
    {
      small=arr[i];
      small_pos=i;
    }
    if(arr[i]>large)
    {
      large=arr[i];
      large_pos=i;
    }
  }
  printf("\n the smallest element in the array is:%d",small);
  printf("\n the positionof the smallest element is:%d",small_pos);
  printf("\n the largest element in the array is:%d",large);
  printf("\n the position of the largest element is:%d",large_pos);
 temp=arr[large_pos];
 arr[large_pos]=arr[small_pos];
 arr[small_pos]=temp;
 printf("\n the new array is:");
 for(i=0;i<n;i++)
 {
  printf("\t %d",arr[i]);
 }
 getch();
 return(0);
}





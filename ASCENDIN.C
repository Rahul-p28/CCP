#include<stdio.h>
#include<conio.h>
int main()
{
  int i,n,j,num,arr[25];
  clrscr();
  printf("\n enter the elements in the array:");
  scanf("%d",&n);
  printf("\n enter the values in the array :");
  for(i=0;i<n;i++)
  {
   scanf("%d",&arr[i]);
  }
  printf("\n enter the number to be inserted:");
  scanf("%d",&num);
  for(i=0;i<n;i++)
  {
   if(arr[i]>num)
   {
    for(j=n-1;j>=i;j--){
    arr[j+1]=arr[j];
    }
    arr[i]=num;
    break;
   }
  }
 n++;
 printf("\n the array after the insertion is:");
 for(i=0;i<n;i++)
 {
 printf("\t %d",arr[i]);
 }
 getch();
 return(0);
 }
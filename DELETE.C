#include<stdio.h>
#include<conio.h>
int main()
{
 int i,n,pos,arr[15];
 clrscr();
 printf("\n enter the numberof elements in the array:");
 scanf("%d",&n);
 printf("\n enter the elements in the array:");
 for(i=0;i<n;i++)
 {
  scanf("%d",&arr[i]);
 }
 printf("\n enter the position to br deleted in the array:");
 scanf("%d",&pos);
 for(i=pos;i<n-1;i++)
 {
   arr[i]=arr[i+1];
 }
 n--;
 printf("\n the array after the deletion is:");
 for(i=0;i<n;i++)
 {
  printf("\t%d",arr[i]);
 }
 getch();
 return(0);
 }
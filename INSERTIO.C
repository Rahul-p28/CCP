#include<stdio.h>
#include<conio.h>
int main()
{
 int i,n,num,pos,arr[25];
 clrscr();
 printf("\n enter the elements in the array is:");
 scanf("%d",&n);
 printf("\n enter the values in the array:");
 for(i=0;i<n;i++)
 {
   scanf("%d",&arr[i]);
 }
 printf("\n enter the value to be inserted in the array:");
 scanf("%d",&num);
 printf("\n enter the position to be inserted in the array:");
 scanf("%d",&pos);
 for(i=n-1;i>=pos;i--);
 {
  arr[i+1]=arr[i];
 }
 arr[pos]=num;
 n++;
 printf("\n the array after the insertion of new element is:");
 for(i=0;i<n;i++)
 {
 printf("\t %d",arr[i]);
 }
 getch();
 return(0);
 }
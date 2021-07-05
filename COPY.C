#include<stdio.h>
#include<conio.h>
int main()
{
 int i=0,length;
 char s1[50],s2[50];
 clrscr();
 printf("\n enter the string:");
 gets(s1);
 while(s1[i]!='\0')
 {
   s2[i]=s1[i];
   i=i+1;
 }
 s2[i]='\0';
 printf("\n the copied string is :");
 puts(s2);
 while(s2[i]!='\0')
 {
   i=i+1;
 }
 length=i;
 printf("\n the length of the copied string is:%d",length);
 getch();
 return(0);
 }
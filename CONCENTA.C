#include<stdio.h>
#include<conio.h>
int main()
{
  int i=0,j=0;
  char str1[50],str2[50],str3[50];
  clrscr();
  printf("\n enter the frist string:");
  gets(str1);
  printf("\n enter the second string :");
  gets(str2);
  while(str1[i]!='\0')
  {
    str3[i]=str1[i];
    i=i++;
  }
  while(str2[j]!='\0')
  {
    str3[i]=str2[j];
    i=i++;
    j=j++;
  }
  str3[i]='\0';
  printf("\n the concentanted string of %s and %s is %s",str1,str2,str3);
  getch();
  return(0);
}
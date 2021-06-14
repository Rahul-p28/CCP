#include<stdio.h>
#include<conio.h>
int main()
{
  char ch;
  clrscr();
  printf("\n enter any character:");
  scanf("%c",&ch);
  switch(ch)
  {
  case 'A':
  case 'a':
  printf("\n the entered character is vowel");
  break;
  case 'E':
  case 'e':
  printf("\n the entered character is vowel");
  break;
  case 'I':
  case 'i':
  printf("\n the entered character id vowel");
  break;
  case 'O':
  case 'o':
  printf("\n the entered character is vowel");
  break;
  case 'U':
  case 'u':
  printf("\n the entered character is vowel");
  break;
  default:printf("\n the entered character is not vowel");
  }
  getch();
  return(0);
  }
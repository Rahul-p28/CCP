#include<stdio.h>
#include<conio.h>
int main()
{
  float celsius,fahrenheit;
  clrscr();
  printf(" enter the temperature in fahrenheit:");
  scanf("%f",&fahrenheit);
  celsius=0.56*(fahrenheit-32);
  printf("%.2f fahrenheit=%.2f celsius",fahrenheit,celsius);
  getch();
  return(0);
}

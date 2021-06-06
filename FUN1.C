#include<stdio.h>
#include<conio.h>
#include<math.h>
float area(float a,float b,float c);
int main()
{
   float x,y,z,res;
   clrscr();
   printf("\n enter the the length of the three sides of triangle:");
   scanf("%f %f %f",&x,&y,&z );
  res= area(x,y,z);
   printf("\n the area of triangle:%.2f",res);
   getch();
   return(0);
}

  float area(float a,float b,float c)
  {
  float area,s;
  s=(a+b+c)/2;
  area=sqrt(s*(s-a)*(s-b)*(s-c));
  return area;
}
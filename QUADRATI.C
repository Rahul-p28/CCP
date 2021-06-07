#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
  int a,b,c;
  double discriminant,r1,r2,real_part,imaginary_part;
  clrscr();
  printf("\n enter the co-efficients :");
  scanf("%d %d %d",&a,&b,&c);
  discriminant=b*b-4*a*c;
  if(discriminant>0)
  {
   r1=(-b+sqrt(discriminant))/(2*a);
   r2=(-b-sqrt(discriminant))/(2*a);
   printf("\n r1=%.2lfand r2=%.2lf",r1,r2);
  }
  else if(discriminant==0)
  {
    r1=r2=-b/(2*a);
    printf("\n r1=r2=-b/(2*a)",r1);
  }
  else
  {
  real_part=-b/(2*a);
  imaginary_part=sqrt(-discriminant)/(2*a);
  printf("\n r1=%.2lf+%.2lfi and r2=%.2lf+%.2lfi",real_part,imaginary_part,real_part,imaginary_part);
  }
  getch();
  return(0);
}

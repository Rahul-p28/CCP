#include<stdio.h>
#include<conio.h>
void main()
{
    int a,b;
    clrscr();
    printf("\n enter the numbers:");
    scanf("%d %d",&a,&b);
    if(a==b)
    printf("\n a and b are equal");
    else
    printf("\n a and b are not equal");
    getch();
}
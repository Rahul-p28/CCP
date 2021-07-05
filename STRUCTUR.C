#include<stdio.h>
#include<conio.h>
int main()
{
  struct student
  {
    int roll_no;
    char name[50];
    char section[10];
    char department[50];
    int fees;
    int total_marks;
  };
  struct student stud[5];
  int n,i,large=-34;
  clrscr();
  printf("\n enter the number of students :");
  scanf("%d",&n);
  for(i=0;i<n;i++)
  {
   printf("\n enter the roll number :");
   scanf("%d",&stud[i].roll_no);
   printf("\n enter the name of the student:");
   scanf("%s",stud[i].name);
   printf("\n enter the sectionof the student:");
   scanf("%s",stud[i].section);
   printf("\n enter the department of the student:");
   scanf("%s",stud[i].department);
   printf("\n enter the fees paid by the student:");
   scanf("%d",&stud[i].fees);
   printf("\n enter the total marks entered by the student:");
   scanf("%d",&stud[i].total_marks);
  }
  printf(" the details of students:\n");
  for(i=0;i<n;i++)
  {
   printf("\n roll number of the student is:%d",stud[i].roll_no);
   printf("\n name of the student is:%s",stud[i].name);
   printf("\n section :%s",stud[i].section);
   printf("\n department of the student:%s",stud[i].department);
   printf("\n fees paid by the student:%d",stud[i].fees);
   printf("\n total marks obtained by the student:%d",stud[i].total_marks);
  }
 printf("\n the highest marks is:");
 for(i=0;i<n;i++)
 {
   if(stud[i].total_marks>large)
   {
     large=stud[i].total_marks;
   }
 }

 printf("\n the student%d is scored %d",i,large);
 getch();
 return(0);
 }

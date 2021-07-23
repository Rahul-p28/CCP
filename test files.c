#include<stdio.h>
void main()
{
 FILE *fp;
 char feedback[100];
 fp=fopen("BMSCE.txt","w");
 printf("\n write something about BMSCE:");
 gets(feedback);
 fputs(feedback,fp);
 fclose(fp);
 fp=fopen("C:\\Users\\kaushik b\\Downloads\\BMSCE.txt","r");
 printf("\n the data read from the file is :");
 while(fgets(feedback,100,fp)!=NULL)
 {
     printf("\n %s",feedback);
 }
 }

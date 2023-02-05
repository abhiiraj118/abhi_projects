// 6. write a program in c to display the pattern like a right angle triangle using an asterisk.

#include <stdio.h>
int main()
{
   int i,j,rows;
   printf("Input number of rows : ");
   scanf("%d",&rows);
   for(i=1;i<=rows;i++)
   {
    for(j=1;j<=i;j++)
       printf("*");
    printf("\n");
   }
}

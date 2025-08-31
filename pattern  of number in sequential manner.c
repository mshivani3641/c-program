
#include <stdio.h> 
void main() 
{ 
   int i, j, rows,t=1; 
   printf("Enter the number of rows: "); 
   scanf("%d", &rows); 
   for (i = 1; i <= rows; ++i) 
   { 
      for (j = 1; j <= i; ++j)  
      { 
         printf("%d ",t++); 
      } 
      printf("\n"); 
   } 
 }
#include <stdio.h> 
void main() 
{ 
   int i, n; 
   printf("Enter n value: "); 
   scanf("%d", &n); 
printf(“even numbers between 1 to %d:\n”,n); 
   for (i = 1; i <=n; ++i) 
   { 
       if((i%2)==0) 
       printf(“%d”,i); 
} 
} 
 
        
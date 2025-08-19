#include <stdio.h> 
void main()  
{ 
  int n, bin,temp,rem, j,i; 
  printf("Enter a decimal number: "); 
  scanf("%d", &n); 
  for(i=1;i<n;i++) 
  { 
     bin = 0; 
    temp=i; 
     j=1; 
    while (temp!=0)  
     { 
        rem = temp % 2; 
        temp /= 2; 
         bin += rem * j; 
         j *= 10; 
      } 
  printf("%d in decimal =  %lld in binary\n", i, bin); 
  }} 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 

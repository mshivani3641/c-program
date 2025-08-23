#include<stdio.h> 
void  main()  
{ 
  int n, i, count= 0; 
  printf("Enter a positive integer: "); 
  scanf("%d", &n); 
    for (i = 2; i < n; ++i)  
    { 
    if (n % i == 0) 
        count=1; 
     } 
  if (count == 0) 
    printf("%d is a prime number.", n); 
  else 
    printf("%d is not a prime number.", n); 
} 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 

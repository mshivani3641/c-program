#include<stdio.h> 
void  main() 
{ 
  int n,r,i,m; 
  printf("\n Enter number for multiplication table :"); 
  scanf("%d", &n); 
  printf("\n Enter number of rows:"); 
  scanf("%d", &r); 
  for(i=1;i<=r;i++) 
  { 
  m=n*i; 
  printf("%d  x %d =  %d\n",n,i,m);
  }
}
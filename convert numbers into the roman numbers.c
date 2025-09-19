#include<stdio.h> 
int main() 
{ 
  int decimal[] = {1000,900,500,400,100,90,50,40,10,9,5,4,1}; 
  char *symbol[] = {"M","CM","D","CD","C","XC","L","XL","X","IX","V","IV","I"};   
  int i=0,n,j,num; 
  printf("enter n values"); 
  scanf("%d",&n); 
  for(j=1;j<=n;j++) 
 { 
    i=0; 
    num=j; 
    printf("%d in roman is ", num); 
   while(num) 
  { 
    while(num/decimal[i]) 
    {   
       printf("%s",symbol[i]);  
       num -= decimal[i];   
     } 
     i++;  
  } 
    printf("\n"); 
  } 
} 

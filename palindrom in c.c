#include <stdio.h> 
void main() 
{ 
    int n,sum=0,r,rev=0,temp; 
    printf("enter a +ve integer");  
    scanf("%d",&n); 
temp=n; 
    while(n>0)   
    { 
        r=n%10; 
        rev=rev*10+r; 
        sum=sum+r;    
        n=n/10; 
    } 
printf("sum of individual digits of a positive integer is %d\n",sum);   
printf("%d reverse number  is %d\n",temp,rev);   
if(temp==rev) 
printf(“The given number is palindrom\n”); 
} 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 

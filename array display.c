#include<stdio.h> 
void main() 
{ 
int arr[10],*p,i,n; 
printf("enter arrray size"); 
scanf("%d",&n); 
p=&arr[0]; 
printf("enter array elemnts"); 
for(i=0;i<n;i++) 
{ 
scanf("%d",p); 
p++; 
} 
printf("array elements are\n"); 
for(i=0;i<n;i++) 
printf("%d\t",arr[i]); 
} 

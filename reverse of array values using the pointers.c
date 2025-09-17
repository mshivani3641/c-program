
#include<stdio.h> 
void main() 
{ 
int arr[10],*p,i,n; 
printf("enter arrray size"); 
scanf("%d",&n); 
printf("enter array elemnts"); 
for(i=0;i<n;i++) 
scanf("%d",&arr[i]); 
p=&arr[n-1]; 
printf("array elements in reverse order using pointer p\n"); 
for(i=0;i<n;i++) 
{ 
printf("%d\t",*p); 
p--; 
} 
}
#include<stdio.h> 
void main() 
{ 
int arr[10],*p,i,n,sum=0;; 
printf("enter arrray size"); 
scanf("%d",&n); 
printf("enter array elemnts"); 
for(i=0;i<n;i++) 
scanf("%d",&arr[i]); 
p=&arr[0]; 
printf("array elements  using pointer :\n"); 
for(i=0;i<n;i++) 
{ 
printf("%d\t",*p); 
sum=sum+(*p); 
p++; 
} 
printf("\n sum of array elements is:%d\n",sum);
}
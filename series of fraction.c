#include <stdio.h> 
#include <math.h> 
void main() 
{ 
float x,sum,t,d; 
int i,n; 
printf("Input the Value of x :"); 
scanf("%f",&x); 
printf("Input the number of terms : "); 
scanf("%d",&n); 
sum =1; 
for (i=1;i<=n;i++) { 
t=pow(-x,i); 
sum =sum+ t/2*i; 
} 
printf("\nthe sum = %f\nNumber of terms = %d\nvalue of x = %f\n",sum,n,x)
}

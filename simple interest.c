#include<stdio.h> 
#include<conio.h> 
void main() 
{ 
int i,x;  
float f;  
double p; 
short s;  
printf("enter integer value\n"); 
scanf("%d",&i); 
printf("enter float value\n"); 
scanf("%f",&f); 
p=i; // implicit conversion  
printf("implicit value is %lf\n",p); 
x= (int) f; // Explicit conversion  
printf("Explicit value is %d\n",x); 
}  
Output:  
enter integer value 
24 
enter float value 
45.87 
implicit value is 24.000000 
Explicit value is 45
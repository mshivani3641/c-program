#include<stdio.h> 
void main() 
{ 
   int a, b, result; 
   char ch; 
   printf("1.(+) Addition\n"); 
   printf("2.(-)subtraction\n"); 
   printf("3.(*) Multiplication\n"); 
   printf("4.(/) Division\n"); 
   printf("5.(mod) Modulus\n"); 
   printf("Enter your operator(+, -, /, *, mod)\n"); 
   scanf("%c ",&ch); 
   printf("Enter the values of a and b\n"); 
   scanf("%d %d",&a,&b); 
   switch(ch) 
   { 
      case '+': result = a + b; 
                break; 
      case '-': result = a - b; 
                  break; 
      case '*': result = a * b; 
                  break; 
      case '/': result = a / b; 
                 break; 
      case '%': result = a % b; 
                 break; 
      default: printf("Invalid operator"); 
   } 
   printf("%c of two numbers is %d", ch,result);
}
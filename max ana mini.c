#include <stdio.h> 
void main() 
{ 
    int num1, num2, num3, max,min; 
    printf("Enter three numbers: "); 
    scanf("%d%d%d", &num1, &num2, &num3); 
     if(num1 > num2) 
    { 
        if(num1 > num3) 
             max = num1; 
       else 
          max = num3; 
    } 
    else if(num2 > num3) 
        max = num2; 
    else 
        max = num3; 
       //finding min 
        if(num1 < num2) 
    { 
        if(num1 < num3) 
             min= num1; 
       else 
          min = num3; 
    } 
    else if(num2 < num3) 
        min = num2; 
    else 
        min = num3; 
        printf("Maximum among all three numbers = %d\n", max); 
        printf("Minimum among all three numbers = %d", min); 
  } 
 
 
 
 
 
 
 
 
 
 
 
 
b. Write the program for the simple, compou
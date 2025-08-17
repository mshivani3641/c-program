#include<stdio.h> 
void  main() 
 { 
  int per; 
  printf("\n Enter percentage :"); 
  scanf("%d", & per); 
  if (per >=70) 
    printf("\n You got Distinction"); 
  else if ((per>=60)&&(per<70)) 
    printf("\nYou got First Class");  
  else if ((per>=40)&&(per<60)) 
    printf("\n You got Second Class"); 
  else 
    printf("\n  You got Fail"); 
 } 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 

#include <stdio.h> 
void  main()  
{ 
    int a,b,sum,sub,div,mul,mod; 
    printf("enter number a and b"); 
    scanf("%d%d",&a,&b); 
 //artithmatic operators 
   printf("addition of a and b is %d\n",a+b); 
    printf("subtraction of a and b is %d\n",a-b); 
    printf("multiplication of a and b is %d\n",a*b); 
    printf("division of a and b is %d\n",a/b); 
    printf("modulus of  of a and b is %d\n",a%b); 
 
 //unary operators 
    printf("pre increment of a is %d\n",++a); 
    printf("postincrement of a  is %d\n",a++); 
    printf("predecrement of b is %d\n",--b); 
    printf("postdecrement of b is %d\n",b--); 
    printf("unary minus of a is %d\n",-a); 
    printf("size of a is %d\n",sizeof(a)); 
    a=(15,20,25); 
    printf("comma operator %d \n",a); 
 //relational operators 
    printf("less than operator %d \n",a<b); 
     printf("greater than operator %d \n",a>b); 
      printf("equals operator %d \n",a==b); 
       printf("not equlas operator %d \n",a!=b); 
 
   //logical operators 
        printf("logical and (&&) operator %d \n",a&&b); 
        printf("logical or (||) operator %d \n",a||b); 
        printf("logical not (!) operator %d \n",!a); 
//bitwise operators 
        printf("bitwise and(&) operator %d \n",a&b); 
        printf("bitwise  or (|) operator %d \n",a|b); 
        printf("bitwise xor operator(^) %d \n",a^b); 
        printf("left shift operator (<< )%d \n",a<<2); 
        printf("right shift operator (>>)%d \n",a>>2);   
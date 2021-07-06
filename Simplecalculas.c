#include <stdio.h>

int main()
{
int a,b,add,sub,mul;
float div;
printf("Here You go for the calculation");
printf("\nGive the two numbers to continue");
scanf("%d %d",&a,&b);
add = a+b;
sub = a-b;
mul = a*b;
div=a/b;
printf("And the result for two numbers \n-> addition is %d \n-> Subtraction is %d\n-> Multiplication is %d \n-> Division is %d",add,sub,mul,div);
}

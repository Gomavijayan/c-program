//Problem statement

//Implement the following function

//def solveequation(a,b,c)

//The function accepts 3 integers ‘a’,’b’,and ‘c’ as its arguments implement the function to evaluate the quadratic a^2+a^2+c^2+2*a*b+2*b*c+2*a*c and return the same.

 


#include<stdio.h>
int main()
{
    int a,b,c,n1;
    scanf("%d %d %d",&a,&b,&c);
    n1=a*a+b*b+c*c+2*a*b+2*b*c+2*c*a;
    printf("%d",n1);
}

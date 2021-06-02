#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int DigitSum(int num);
 
int main()
{
    int n1, sum;

    scanf("%d", &n1);
     
    sum = DigitSum(n1);
     
    printf("Sum of digits: %d", sum);
     
    return 0;
}

int DigitSum(int n1)
{
    if(n1 == 0)
        return 0;
         
    return ((n1 % 10) + DigitSum(n1 / 10));
}
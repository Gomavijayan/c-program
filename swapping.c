#include <assert.h>
#include <ctype.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>



int main()
{
     int a,b;

     scanf("%d %d", &a, &b);

     printf("Before Swapping: %d %d\n",a,b);

     a=a+b;

     b=a-b;

     a=a-b;

     printf("After Swapping: %d %d",a,b);

}
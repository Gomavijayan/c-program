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
    int p,n,r,p1,n1,r1, si;

    scanf("%d", &p);

    scanf("%d", &n);

    scanf("%d",&r);

    p1 = p;

    n1 = n;
    r1=r;

    si = (p1 * n1* r1) /100;

    printf("The simple interest is:%d",si);

    return 0;
}
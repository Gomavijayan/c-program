//Learnprogramo
#include<stdio.h>
long factorial(int);
int main()
{
int row, c, n, temp;
printf("Enter the number of rows you wish to see in pascal triangle \n");
scanf("%d",&n);
temp = n;
for ( row = 0 ; row < n ; row++ )
{
/* for spacing purpose */
for ( c = 1 ; c < temp ; c++ )
printf(" " );
temp--;
/* for printing stars */
for ( c = 0 ; c <= row ; c++ )
printf("%ld ",factorial(row)/(factorial(c)*factorial(row-c)));
printf("\n");
}
}
long factorial(int n)
{
int c;
long int result = 1;
for (c = 1; c <= n; c++)
result = result*c;
return result;
}
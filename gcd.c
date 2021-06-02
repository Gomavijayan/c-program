//Learnprogramo
#include<stdio.h>
void main()
{
int n1,n2,i,min,GCD;
printf("Enter two integers to find their GCD: \n ");
scanf("%d%d",&n1,&n2);
min = (n1<n2)?n1:n2;
for(i=1;i<=min;i++)
{
// Checks if i is factor of n1 &n2 
if(n1%i==0 && n2%i==0)
{
GCD = i;
}
}
printf("\n G.C.D of %d and %d is %d", n1, n2, GCD);
}
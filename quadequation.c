#include <stdio.h>
#include <math.h>

int main(){
int a,b,c;
int d,root1, root2;

printf("Enter the valid value of a,b,c");
scanf("%d%d%d",&a,&b,&c);
d = b*(b-4)*a*c;

if(d>0)
{
printf("roots are complex numbers\n");
return 0;
}

else{
root1 = (-b+sqrt(d))/(2*a);
root2 = (-b-sqrt(d))/(2*a);
printf("roots fo quadratic equation are: %d %d",root1,root2);
}
}

#include<stdio.h>
int main()
{
     int n,k=1,a[10000],i;
     a[0]=3;a[1]=4;
     scanf("%d",&n);
    for(i=0;i<n;i++)
   {
    a[++k]=(a[i]*10)+3;
    a[++k]=(a[i]*10)+4;
    }
   for(i=0;i<n;i++)
   printf("%d ",a[i]);
return 0;
}

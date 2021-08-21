#include<stdio.h>
int main()
{
int n1,n2,n3,i,j,k;
scanf("%d%d%d",&n1,&n2,&n3);
int arr1[n1],arr2[n2],arr3[n3];
for(i=0;i<n1;i++)
{
scanf("%d",&arr1[i]);
}
for(j=0;j<n2;j++)
{
scanf("%d",&arr2[j]);
}
for(k=0;k<n3;k++)
{
scanf("%d",&arr3[k]);
}
i=0;j=0;k=0;
while(i<n1 && j<n2 && k<n3)
{
if (arr1[i] == arr2[j] && arr2[j] == arr3[k])
{
printf("%d ",arr1[i]);
i++;
j++;
k++;
}
else if (arr1[i] < arr2[j])
{
i++;
}
else if (arr2[j] < arr3[k])
{
j++;
}
else
{
k++;
}
}
return 0;
}

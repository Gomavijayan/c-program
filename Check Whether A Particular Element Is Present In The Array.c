#include<stdio.h>
int searchArray(int *,int,int);

int searchArray(int *arr,int n,int search)
{
int index;
for(index=0;index<n;index++)
{
if(arr[index]==search)
return index;
}
return -1;
}

int main()
{
int arr[100],n,index,result,search;
scanf("%d",&n);
for(index=0;index<n;index++)
scanf("%d",&arr[index]);
scanf("%d",&search);
result=searchArray(arr,n,search);
if(result==-1)
printf("Element not found in array");
else
printf("Element is found at index : %d",result);
return 0;
}

#include<stdio.h>
int unlock(int num)
{
 int arr[10],index=0,n,result=0,temp;
 int itr;
 while(num)
 {
 arr[index]=num%10;
 index++;
 num=num/10;
 }
 n=index;
 for(itr=1;itr<=n-1;itr++)
 {
 for(index=1;index<n;index++)
 {
 if(arr[index-1] > arr[index])
 {
 int temp=arr[index];
 arr[index]=arr[index-1];
 arr[index-1]=temp;
 }
 }
 }
 index=0;
 while(arr[index]==0)
 index++;
 temp=arr[index];
 arr[index]=arr[0];
 arr[0]=temp;
 for(index=0;index<n;index++)
 {
 result=result*10+arr[index];
 }
 return result;
}
int main()
{
 int num,res;
 scanf("%d",&num);
 res=unlock(num);
 printf("%d",res);
 return 0;
}

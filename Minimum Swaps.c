#include<stdio.h>
int main()
{
 int n,arr[1000],index,left,right,k,swap=0;
 scanf("%d",&n);
 for(index=0;index<n;index++)
 scanf("%d",&arr[index]);
 scanf("%d",&k);
 for(left=0,right=n-1;left<right;left++,right--)
 {
 while(arr[left]<=k)
 left++;
 while(arr[right]>k)
 right--;
 if(left<right)
 swap++;
 }
 printf("%d",swap);
 return 0;
}

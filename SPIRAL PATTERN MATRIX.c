#include <stdio.h>
int main()
{
 int n;
 scanf("%d",&n);
 int val=1;
 int arr[n][n];
 int u=0,l=0,r=n-1,b=n-1;
 while(l<=r && u<=b){
 for(int i=l;i<=r;i++){
 arr[u][i]=val++;
 }
 u++;
 for(int i=u;i<=b;i++){
 arr[i][r]=val++;
 }
 r--;
 for(int i=r;i>=l;i--){
 arr[b][i]=val++;
 }
 b--;
 for(int i=b;i>=u;i--){
 arr[i][l]=val++;
 }
 l++;
 }
 for(int i=0;i<n;i++){
 for(int j=0;j<n;j++){
 printf("%02d ",arr[i][j]);
 }
 printf("\n");
 }
}

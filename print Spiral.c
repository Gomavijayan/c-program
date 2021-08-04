#include<stdio.h>
#include<string.h>
#include<math.h>
void spiralPattern(int n){

int arr[n][n];
int u=0,l=0,b=n,r=n,val=1;
while(l<r && u<b){
for(int i=l;i<r;i++){
arr[u][i]=val++;
}
u++;
for(int i=u;i<b;i++){
arr[i][r-1]=val++;
}
r--;
for(int i=r-1;i>=l;i--){
arr[b-1][i]=val++;
}
b--;
for(int i=b-1;i>=u;i--){
arr[i][l]=val++;
}
l++;
}
for(int i=0;i<n;i++){
for(int j=0;j<n;j++){
printf("%d ",arr[i][j]);
}
printf("\n");
}
}
int main()
{
int n;
scanf("%d",&n);
spiralPattern(n);
}

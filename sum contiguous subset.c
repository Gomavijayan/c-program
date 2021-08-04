#include<stdio.h>
int flag=-1;
int max(int a,int b){
if(a>=b){
flag=1;
return a;
}
else{
flag=0;
return b;
}
}
int main()
{
int n,k;
scanf("%d",&n);
int arr[n],dummy[n],m=0;
for(int i=0;i<n;i++){
scanf("%d",&arr[i]);
}
int g=0,l=0;
for(int i=0;i<n;i++){
l=max(arr[i]+l,arr[i]);
if(flag==1){
dummy[m++]=arr[i];
}
else if(flag==0 && l>g){
m=0;
dummy[m++]=arr[i];
}
if(l>g){
g=l;
}
}
printf("%d",g);

}

#include <stdio.h>
int gcd(int a, int b)
{
if (a == 0)
return b;
return gcd(b % a, a);
}
int calculateLCM(int a, int b)
{
// code here
int max_div = (a>b)?a:b;

while(1){
    if(max_div % a == 0 && max_div % b == 0){
        return max_div;
        break;
    }
    ++max_div;
}

}
int calculateGeneralLCM( int arr[],int n){
int x = calculateLCM(arr[0],arr[1]);
for(int i=2;i<n;i++){
x = calculateLCM(x,arr[i]);
}
return x;
}
int main()
{

int n;
scanf("%d",&n);
int arr[n];
for(int i=0;i<n;i++){
scanf("%d",&arr[i]);
}
printf("%d",calculateGeneralLCM(arr,n));
return 0;
}

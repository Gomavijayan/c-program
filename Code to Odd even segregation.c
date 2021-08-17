#include<stdio.h>
int main() {
 int con,num1=0,num2=0,itr,ctr,size;
 scanf("%d",&size);
 int arr[size];
 for(itr=0;itr<size;itr++)
 {
 scanf("%d",&arr[itr]);
 }
 int odd[100];
 int even[100];
 int mer[size];
 for(itr=0;itr<size;itr++)
 {
 if(arr[itr]%2==1)
 {
 odd[num1]=arr[itr];
 num1++;
 }
 else
 {
 even[num2]=arr[itr];
 num2++;
 }
 }
 for(itr=0;itr<num1;itr++)
 {
mer[itr]=odd[itr];
 }
 ctr=itr;
 for(itr=0;itr<num2;itr++)
 {
mer[ctr]=even[itr];
ctr++;
 }
 for(itr=0;itr<size;itr++)
 {
printf("%d ",mer[itr]);
 } }

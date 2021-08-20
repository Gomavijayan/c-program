#include<stdio.h>
#include<string.h>
int main()
{
 char str[100][100];
 int n,string;
 scanf("%d",&n);
 for(string=0;string<n;string++)
 scanf("%s",str[string]);
 int index=0,count=0;
 for(string=0;string<n;string++)
 {
 for(index=string+1;index<n;index++)
 {
 if(strcmp(str[string],str[index])==0)
 {
 count++;
 }
 }
 }
 printf("The number of identical pairs of strings are %d",count);
return 0;
}

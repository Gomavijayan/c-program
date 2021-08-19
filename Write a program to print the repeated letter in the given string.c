#include<stdio.h>
int main()
{
 char str[100],str1[100],flag[100]={0};
 int ind,ind1,len,j=0;
 scanf("%[^\n]s",str);
 for(ind=0;str[ind];ind++)
 {
 if(flag[ind]==1)
 continue;
 for(ind1=ind+1;str[ind1];ind1++)
 {
 if(str[ind]==str[ind1])
 {
 flag[ind]=2;
 flag[ind1]=1;
 }
 }
 }
 for(ind=0;str[ind];ind++)
 {
 if(flag[ind]==2)
 printf("%c",str[ind]);
 }
 return 0;
}

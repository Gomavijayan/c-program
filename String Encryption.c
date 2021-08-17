#include <stdio.h>
#include<string.h>
int main()
{
 int i,key,k=0;
 char st[100];
 scanf("%s",st);
 scanf("%d",&key);
 for(i=0;i<strlen(st);i++)
 {
 st[i]=st[i]+key;
 }
 printf("%s",st);
}

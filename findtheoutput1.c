1.#include<stdio.h>

   int main()
 {
  int c[]={2,3,4,6,5};
  int j, *p=c, *q=c;
  for(j=0;j<5;j++)                         
 {
     printf("%d",*c);
     ++q;
  }
 for(j=0;j<5;j++)
  {
  printf("%d",*p);
  ++p;
  }}

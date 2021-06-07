#include<stdio.h>
   int main()
 {
  char *p ="Phone";                         
  p++;
  char c =(*p);
  ++c;
  p--;
  printf("%c%s",c,p++);
  }

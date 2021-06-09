#include<stdio.h>

int main()
{
  int f = 0, g = 1;
  int i;
  for(i = 0; i < 15; i++) 
  {
    printf("%d \n", f);
    f = f + g;
    g = f - g;
  }
  getchar();
  return 0;
}

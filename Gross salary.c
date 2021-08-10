#include <stdio.h>  
  
int main()  
{  
    float bs, gs, da, hra;  
  
    scanf("%f", &bs);  
  
    if( bs < 1550 )  
    {  
        hra = bs * 10 / 100;  
        da  = bs * 80 / 100;  
    }  
    else  
    {  
        hra = bs * 30/100;  
        da  = bs * 90/ 100;  
    }  
  
    gs = bs + da + hra;  
  
    printf("%.0f\n", gs);  
  
    return 0;  
} 

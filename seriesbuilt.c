#include<stdio.h>
int main()
{
    int num,ans=0,power=1;
    scanf("%d",&num);
    while(num!=0)  // 8 3 
    {
        if(num%2==0) // 8 
        {
            ans=4*power+ans;// 4*1+0=4
            power=power*10;  //1*10=10       
            num=num/2; //8/2=4 
            num=num-1;//4-1=3
            
        }
        else
        {
            
            ans=3*power+ans;//3 *10+4=34  3*100+34=334
            power=power*10; // 100*10=1000
            num=num/2; // 3/2=1 1/2=0 
        }
    }
    printf("%d",ans);
}

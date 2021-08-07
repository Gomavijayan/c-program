//A war is happening. The enemy battalion has planted a bomb in your bunker. Your spy has intercepted a message from the enemy. It contains a list with N numbers and a key (K). The numbers are used to construct a sequence that will defuse the bomb. According to your spy, the logic to extract the sequence from the message is to replace each number with the sum of the next K numbers, if the value of K is positive. If the value of K is negative, the number is replaced by the sum of the previous K numbers. The series of numbers is considered in a cyclic fashion for the last K numbers.
//Write an algorithm to find the sequence that will defuse the bomb

#include<stdio.h>
int main()
{
    int n,k,i,sum=0,b,a[1000],c;
    scanf("%d %d",&n,&k);
    for(i=0;i<n;i++)
        scanf("%d ",&a[i]);
    c=k;
    for(i=0;i<n;i++,c=k,sum=0){
        b=i;
        if(a[i]>0){
            while(c>0){
                sum+=a[(b+1)%n];
                b++;
                c--;
            }
        }
        else{
            while(c>0){
                sum+=a[(b+k)%n];
                b--;
                c--;
            }
        }
        printf("%d ",sum);
    }
}

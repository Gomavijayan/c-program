#include<stdio.h>
#define MAX 1000
void primeSeries(int n)
{
unsigned long long int num,fact,count=1;
if( n == 1)
printf("2");
else{
for( num = 3 ; num <= MAX ; num+=2 )
{
for(fact=2; fact <=num/2 ; fact++)
if( num % fact ==0) break;
if(fact > num / 2)
{

/

count++;
if(count == n) printf("%llu",num);
}
}
}
}
void fiboSeries(int n)
{
unsigned long long int n1,n2,sum,count=2;
n1=n2=1;
if(n < 3)printf("1");
else
{
while( count != n )
{
sum = n1+n2 ;
n1=n2;
n2 = sum;
count++;
}
printf("%llu",sum);
}
}
int main()
{
int n;
scanf("%d",&n);
if(n % 2 == 0 )
primeSeries(n/2);
else fiboSeries(n/2+1);
}

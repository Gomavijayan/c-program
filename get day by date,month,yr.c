#include<stdio.h>
int getDay(int d, int m, int y)
{
// code here
static int t[] = { 0, 3, 2, 5, 0, 3, 5, 1, 4, 6, 2, 4 };
    y -= m < 3;
    return ( y + y/4 - y/100 + y/400 + t[m-1] + d) % 7;
}
int main()
{
int date,month,year;
scanf("%d %d %d",&date,&month,&year);
int day = getDay(date, month, year);
printf ("%d", day);
return 0;
}

#include<stdio.h>
int main()
{
int row,col,i,j,val=1;
 scanf("%d %d",&row,&col);
 int ans[10][10];
 for(i=0;i<row;i++)
 {
 for(j=0;j<col;j++)
 {
 scanf("%d",&ans[i][j]);
 }
 }
 for(i=0;i<row;i++)
 {
 if(i%2==0)
 for(j=0;j<col;j++)
 {
 printf("%d ",ans[i][j]);
 }
 else
 for(j=col-1;j>=0;j--)
 printf("%d ",ans[i][j]); 

 }

return 0;
}

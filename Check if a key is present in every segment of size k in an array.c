#include<stdio.h>
int findxinkindowSize(int arr[], int x, int k, int n)
{
int i,j;
for (i = 0; i < n; i = i + k) {
// Search x in segment starting
// from index i.
for (j = 0; j < k; j++)
if (arr[i + j] == x)
break;
// If loop didn't break
if (j == k)
return 0;
}

if (i == n)
return 1;
// Check in last segment if n
// is not multiple of k.
for (j=i-k; j<n; j++)
if (arr[j] == x)
break;
if (j == n)
return 0;
return 1;
}
// main driver
int main()
{
int arr[100];
int x = 3, k = 3,ctr;
int n = sizeof(arr) / sizeof(arr[0]);
scanf("%d",&n);
for(ctr =0 ; ctr<n;ctr++)
scanf("%d",&arr[ctr]);
scanf("%d %d",&x,&k);
if (findxinkindowSize(arr, x, k, n))
printf("Yes");
else
printf("No");
return 0;
}

#include<stdio.h>
int * sortArray(int *arr, int length)
{
    int x=0,y=0,n=length;
    for(x=0;x<n;x++)
    {
    int index_of_min = x;
    for(y=x;y<n;y++)
    {
        if(arr[index_of_min]>arr[y])
       {
           index_of_min=y;
       }
       }
       int temp=arr[x];
       arr[x]=arr[index_of_min];
       arr[index_of_min]=temp;
        
    }
    return  arr;
}
    void minElement(int arr1[],int arr2[],int size)
    {
        int index;
    sortArray(arr1, size);    
    sortArray(arr2, size);    
    int min=0;        
    if(arr1[0]>arr2[0]){    
               min=arr2[0];   
               } 
    else{       
        min=arr1[0];       
        } 
        printf("%d",min);
}

int main()
{
    int size;    
    scanf("%d",&size);    
    int arr1[size],arr2[size];
    for(int i=0;i<size;i++)
    {    
        scanf("%d",&arr1[i]);   
        }
   for(int i=0;i<size;i++)
   {    
       scanf("%d",&arr2[i]);  
       
   }
   minElement(arr1,arr2,size);
return 0;
}

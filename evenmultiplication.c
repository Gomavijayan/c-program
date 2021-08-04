#include<stdio.h>
#include<stdlib.h>
int evenmultiplication(int size, int* list){
int mul=1;
}
int main(){
int size;
scanf("%d",&size);
int* list= (int*)malloc(sizeof(int)*size);
for(int i=0;i<size;i++){
scanf("%d",&list[i]);
}
printf("%d",evenmultiplication(size,list));
}
for(int i=0;i<size;i++){
if(list[i]%2==0){
mul=mul*list[i];
}
}
return mul;

#include<stdio.h> 
int main() 
{ 
char one[21][10]={"zero" , "one" , "two" , "three" , "four" , "five" , "six" , "seven" , 
 "eight" , "nine" ,"" , "eleven" , "twelve" , "thirteen" , "fourteen" , "fifteen" , "sixteen" , 
 "seventeen" , "eighteen" , "nineteen"}; 
char tens[10][9]={"" , "ten","twenty","thirty","forty","fifty","sixty","seventy", 
"eighty","ninety"}; 
int num; 
scanf("%d" , &num); 
if(num >=0 && num <= 99) 
{ 
 if( num >= 0 && num <=19) printf("%s" , one[num]); 
 else 
 { 
 printf("%s" , tens [ num / 10 ]); 
 if(num % 10 ) printf(" %s" , one[ num % 10]); 
 } 
} 
else if( num / 100) 
{ 
 printf("%s hundred" , one[ num / 100 ] );
 if( num % 100 == 0) printf(" only"); 
 else 
 { 
 int rem; 
 rem = num % 100; 
 if( rem >= 1 && rem <=19) 
 printf(" and %s" , one[rem]); 
 else 
 { 
 printf(" and %s" , tens [ rem / 10 ]); 
 if(num % 10 ) printf(" %s" , one[ rem % 10]); 
 } 
 } 
} 
return 0; 
}

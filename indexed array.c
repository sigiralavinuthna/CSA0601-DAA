#include<stdio.h>  
int main()    
{    
 int n,sum=0,digit;    
 printf("Enter a number:");    
 scanf("%d",&n);    
 while(n>0)    
 {    
  digit=n%10;    
  sum=sum+digit;    
  n=n/10;    
 }    
 printf("Sum is %d",sum);    
 return 0;  
}
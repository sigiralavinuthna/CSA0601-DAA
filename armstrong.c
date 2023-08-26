#include<stdio.h>
int main()
{
   int num,rem,sum=0,temp;
   printf("enter the number=");
   scanf("%d",&num);
   temp=num;
   while(num>0){
      rem=num%10;
      sum+=(rem*rem*rem);
      num=num/10;
   }
   if(temp==sum)
      printf("This number is Armstrong number");
   else
      printf("This number is not Armstrong number");
   return 0;
}
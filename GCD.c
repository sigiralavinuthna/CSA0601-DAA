#include<stdio.h>
int main()
{
	int max,min,i,a[i],n;
	printf("enter a size");
	scanf("%d",&n);
	printf("enter a number of elements");
	for(i=0;i<=n;i++)
	scanf("%d",&a[i]);
	min=a[0];
	max=a[0];
	for(i=0;i<=n;i++)   
	{
		if(a[i]>max)
		max=a[i];
		if(a[i]<min)
		min=a[i];
}
printf("max element:%d",max);
printf("min element:%d",min);
return 0;
}
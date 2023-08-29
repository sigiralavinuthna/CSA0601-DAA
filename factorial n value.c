long int multiplynumbers(int n);
int main()
{
	int n,i;
	printf("enter the positive integer:");
	scanf("%d",&n);
	if(i<=n)
	{
	    printf("factorial of %d=%1d",n,multiplynumbers(n));
    }
    else
    {
    	printf("NO negative value");
	}
	return 0;
}
long int multiplynumbers(int n)
{
	if(n>=1)
		return n*multiplynumbers(n-1);
	else
		return 1;
}
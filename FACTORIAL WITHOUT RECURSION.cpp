#include<stdio.h>
int main()
{
	int i,n,fact;
	printf("\n enter the number:");
	scanf("\n %d",n);
	for(i=1;i<=n;i++)
	{
		fact=fact*i;
	}
	printf("\n factorial value is %d",fact);
	return 0;
}

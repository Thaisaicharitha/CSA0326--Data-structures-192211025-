#include<stdio.h>
#include<string.h>
int main()
{
	char c[200],t;
	int n,i,j;
	printf("enter a string:");
	gets(c);
	n=strlen(c);
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-1;j++)
		{
			if(c[j]>c[j+1])
			{
				t=c[j];
				c[j]=c[j+1];
				c[j+1]=t;
			}
		}
	}
	printf("string after sorting:%s",c);
	return 0;
	
}

#include<stdio.h>
#include<string.h>
int main()
{
	char s1[100],s2[100];
	int i,c=0;
	printf("\n enter the first string: ");
	gets(s1);
	printf("\n enter the second string: ");
	gets(s2);
	if(strlen(s1)==strlen(s2))
	{
		for(i=0;s2[i]!='\0';i++)
		{
			if(s1[i]==s2[i])
			c++;
		}
		if(c==i)
		printf("strings are equal:");
		else
		printf("strings are not equal:");
	}
	else
	printf("\n strings are not equal");
	return 0;
}

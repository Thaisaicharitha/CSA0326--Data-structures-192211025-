#include<stdio.h>

int fact(int);
int main()
{
    int a,n;
    printf(" Enter the Number to Find Factorial :");
    scanf("%d",&n);

    a=fact(n);
    printf(" Factorial of %d is %d",n,a);

    return 0;
}
int fact(int n)
{
    if(n==0)
        return(1);
    return(n*fact(n-1));
}

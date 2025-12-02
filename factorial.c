#include<stdio.h>
int main()
{
	long int i,n,fact=1;
	printf("enter n number");
	scanf("%ld",&n);
	for(i=1;i<=n;i++)                     
	{
		fact=fact*i;
	}
	printf("factorial=%ld",fact);
	return 0;
}

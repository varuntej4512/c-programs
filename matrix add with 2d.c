#include<stdio.h>
int main()
{
	int a[10][10],b[10][10],c[10][10],r,C,i,j;
	printf("enter rows and coloums");
	scanf("%d%d",&r,&c);
	printf("enter A matrix value");
	for(i=0;i<r;i++)
	{
		for(j=0;j<C;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("enter B matrix value");
	for(i=0;i<r;i++)
	{
		for(j=0;j<C;j++)
		{
			scanf("%d",&b[i][j]);
		}
	}
	for(i=0;i<r;i++)
	{
		for(j=0;j<C;j++)
		{
			c[i][j]=a[i][j]+b[i][j];
		}
	}
	printf("result matrix in \n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<r;j++)
		{
			printf("%d",c[i][j]);
		}
		printf("\n");
	}
	return 0;
}

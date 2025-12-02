#include<stdio.h>
int main()
{
	int s1,s2,s3,s4,s5,tot;
	float avg;
	printf("enter five subjects marks");
	scanf("%d%d%d%d%d",&s1,&s2,&s3,&s4,&s5);
	tot=s1+s2+s3+s4+s5;
	printf("sum of five subjects =%d",tot);
	avg=tot/5;
	printf("\n avg=%f",avg);
	return 0;
}

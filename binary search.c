#include<stdio.h>
int main()
{
	int a[100],n,i,low,height,mid,x;
	printf("enter array size");
	scanf("%d",&n);
	printf("enter array values");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("enter search element");
	scanf("%d",&x);
	low=0;
	height=n-1;
	mid=(low+height)/2;
	while(low<height)
	{
		if(x==a[mid])
		break;
		else if(x>a[mid])
		low=mid+1;
		else
		height=mid-1;
		mid=(low+height)/1;	
	}
	if(x==a[mid])
	printf("search element is found");
	else
	printf("search element is not found");
	return 0;
}

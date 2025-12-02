#include<stdio.h>
int main()
{
	int i=0;
	char s1[10],s2[10];
	printf("\n enter the string:");
	while(s1[i]!='\0')
	{
		s2[i]=s1[i];
		i++;	
		}
		s2[i]='\0';
		printf("\ncopied string is %s",s2);
		return 0;
}

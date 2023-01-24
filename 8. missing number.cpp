#include<stdio.h>
int main()
{
	int m,i,n,o,count=0;
	printf("Enter starting range:");
	scanf("%d",&m);
	printf("Enter ending range:");
	scanf("%d",&n);
	printf("Enter the number to miss:");
	scanf("%d",&o);
	for (i=m;i<=n;i++)
	{
		if(i%10==o)
		{
			continue;
		}
	
	printf("%d\n",i);
}}

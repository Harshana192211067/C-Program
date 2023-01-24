#include<stdio.h>
int main()
{
	int a[20],n,i,count=0;
	printf("Size of elements:");
	scanf("%d",&n);
	printf("Enter elements of array:");
	for (i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for (i=0;i<n;i++)
	{
		if(a[i]<0)
		{
		
		count++;
	}}
	printf("Negative number count is %d",count);
}

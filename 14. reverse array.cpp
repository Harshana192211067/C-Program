#include <stdio.h>
int main()
{
	int a[20],n,i,temp;
	printf("Enetr the size of array:");
	scanf("%d",&n);
	printf("Enter array elements:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for (i=0;i<n/2;i++)
	{
		temp = a[i];
		a[i]=a[n-i-1];
		a[n-i-1] = temp;
	}
	for(i=0;i<n;i++)
	{
		printf("%d",a[i]);
	}
}

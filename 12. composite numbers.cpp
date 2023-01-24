#include<stdio.h>
int main()
{
	int ar[20],count=0,i,n;
	printf("Enter size of array:");
	scanf("%d",&n);
	printf("Enter array elements:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&ar[i]);
	}
	for(i=0;i<n;i++)
	{
		if(ar[i]==2)
		{
			continue;
		}
		else if(ar[i]%2==0)
		{
			count++;
		}
	}
	if (count>2)
	{
	}
	printf("Number of composite numbers=%d",count);
	
	return 0;
}
	

#include<stdio.h>
int main()
{
	int size,i,a[10],add=0;
	printf("Enetr the size:");
	scanf("%d",&size);
	printf("Enter the elements:");
	for(i=0;i<size;i++)
	{
		scanf("%d",&a[i]);
	}
for(i=0;i<size;i++)
{
	add=add+a[i];
}
printf("Sum of entered numbers is %d",add);
}

#include<stdio.h>
 main()
{
	float i,j,row;
	printf("Enter number of rows:");
	scanf("%f",&row);
	for (i=1;i<=row;i++)
		{
		for(j=1;j<=i;j++)
		{
		printf("%f",i);
		}
		printf("\n");
		}
		return 0;
}

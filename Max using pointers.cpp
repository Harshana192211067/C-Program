#include<stdio.h>
int main()
{
	int first,second,*a=&first,*b=&second;
	printf("Enter the first number:");
	scanf("%d",a);
	printf("Enetr the second number:");
	scanf("%d",b);
	if(*a>*b)
	{
		printf("%d is max.",a);
			}
			else
			{
				printf("%d is maximum",&b);
			}

}

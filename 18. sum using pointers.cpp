#include<stdio.h>
int main()
{
	int first, second,*p,*q,sum;
	printf("Enter first number:");
	scanf("%d",&first);
	printf("Enetr second number:");
	scanf("%d",&second);
	p=&first;
	q=&second;
	sum=*p+*q;
	printf("Sum of entered numbers is:%d",sum);
}

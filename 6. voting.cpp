#include<stdio.h>
int main()
{
	int age;
	printf("Enter your age:");
	scanf("%d",&age);
	if (age<=0)
	printf("Invalid entry...");
	{
	if(age>=18)
	printf("Valid entry");
	else
	printf("You are eligiible after %d years",-age+18);
}
	}

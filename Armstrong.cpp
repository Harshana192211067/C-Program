#include <stdio.h>
int main()
{
	int rem,num,num2,arm=0;
	printf("Enter the number to check armstrong number:");
	scanf("%d",&num);
	num2=num;
	while(num2!=0){
		rem=num2%10;
		arm=arm+(rem*rem*rem);
		num2=num2/10;
	}
	if (num==arm)
	{
		printf("The given number %d is armstrong",num);
	}
	else
	{
		printf("The given number %d is not an armstrong",num);
}	}


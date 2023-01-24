#include <stdio.h>
#include <math.h>
int main()
{
	int a,b,c,p,choice;
	printf("Enter your first number:");
	scanf("%d",&a);
	printf("Enter your second number:");
	scanf("%d",&b);
	printf("Enter your choice:");
	scanf("%d",&choice);
	switch(choice)
{
	case 1:
		printf("Sum of the entered number is %d",a+b);
		break;
	case 2:
		printf("Difference of the entered number is %d",a-b);
		break;
	case 3:
		printf("Product of the entered number is %d",a*b);
		break;
	case 4:
		printf("Division of the entered number is %d",a/b);
		break;
	case 5  :
		p= pow(a,b);
    	printf("power of two numbers is %d \n:",p);
    	break;
    default	:
        printf(" Enter Your Correct Choice.");
        break;
    }
    return 0;
}


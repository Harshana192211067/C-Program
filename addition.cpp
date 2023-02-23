#include <stdio.h>

int main() {
    int num,num1;
    printf("Enter an integer: ");
    if(scanf("%d",&num))
    {
    	printf("Enter an integer: ");
    	if(scanf("%d",&num1))
    	
		printf("Sum is %d",num+num1);
		else
		printf("Enter integer only");
}
else
printf("Enter integer only");
    return 0;
}

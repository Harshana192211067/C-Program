#include <stdio.h>      
int isHappyNumber(int num){    
    int rem = 0, sum = 0;     
    while(num > 0){    
        rem = num%10;    
        sum = sum + (rem*rem);    
        num = num/10;    
    }    
    return sum;    
}       
int main()    
{    
    int num ;    
    int sum = num;
	printf("Enter your number:");
	scanf("%d",&num);         
    while(sum != 1 && sum != 4){    
       sum = isHappyNumber(sum);    
    }       
         if(sum==1)    
        printf("%d is a happy number", num);          
    else     
        printf("%d is not a happy number", num);     
     
    return 0;    
}  

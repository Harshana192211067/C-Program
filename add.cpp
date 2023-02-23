#include <stdio.h>

int main() {
    int num1,num2;
    printf("Enter an integer: ");
    while(scanf("%d", &num1) != 1) {
        printf("Invalid input. Please enter an integer: ");
        while(getchar() != '\n');  
    }
    printf("Enter an integer2: ");
    while(scanf("%d", &num2) != 1) {
        printf("Invalid input. Please enter an integer: ");
        while(getchar() != '\n');  
    }
    printf("Sum is %d", num1+num2);
    return 0;
}

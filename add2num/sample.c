/*
 * A simple c code to add 2 numbers
 */

#include <stdio.h>
#include <ctype.h>
#define NUM1 20
#define NUM2 10

int main(){
    int32_t num1 =NUM1, num2 =NUM2;

    // enter 2 numbers from console - user
    printf("Enter first number (press return to use default val of 20): ");
    scanf("%d", &num1);
    printf("Enter second number (press return to use default val of 10): ");
    scanf("%d", &num2);

    int32_t sum = num1 + num2;

    printf("The sum of the two numbers is : %d + %d = %d", num1, num2, sum);
}
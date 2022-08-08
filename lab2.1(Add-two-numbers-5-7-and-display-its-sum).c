//Write a program to add two numbers (5 & 7) and display its sum.
#include <stdio.h>
int main() {

    int num1, num2, sum;

    printf("Enter two integers: ");
    scanf("%d %d", &num1, &num2);
    sum = num1 + num2;

    printf("%d + %d = %d", num1, num2, sum);
    return 0;
}

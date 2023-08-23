//  Write a program make a summation of given number (E.g., 1523 Ans: 11) 

#include <stdio.h>

int main() {
    int number, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &number);

    // Make sure the number is positive for digit sum calculation
    if (number < 0) {
        number = -number;
    }

    while (number != 0) {
        int digit = number % 10;
        sum += digit;
        number /= 10;
    }

    printf("Sum of digits: %d\n", sum);

    return 0;
}


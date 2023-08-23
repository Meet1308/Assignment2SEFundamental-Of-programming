//Write a program you have to make a summation of first and last Digit. (E.g.,1234= 5)
#include <stdio.h>

int main() {
    int number, firstDigit, lastDigit;

    printf("Enter a number: ");
    scanf("%d", &number);

    // Extract the last digit
    lastDigit = number % 10;

    // Find the first digit
    firstDigit = number;
    while (firstDigit >= 10) {
        firstDigit /= 10;
    }

    int sum = firstDigit + lastDigit;
    printf("Sum of first and last digits: %d\n", sum);

    return 0;
}


//WAP to print number in reverse order e.g.: number = 64728 ---> reverse = 82746

#include <stdio.h>

int main() {
    int number, originalNumber, remainder, reverse = 0;

    printf("Enter a number: ");
    scanf("%d", &number);

    originalNumber = number;

    while (number != 0) {
        remainder = number % 10;
        reverse = reverse * 10 + remainder;
        number /= 10;
    }

    printf("Original number: %d\n", originalNumber);
    printf("Reverse order: %d\n", reverse);

    return 0;
}


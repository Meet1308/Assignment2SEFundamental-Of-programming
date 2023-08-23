//  WAP Find out length of string without using inbuilt function
#include <stdio.h>

int main() {
    char str[100];
    printf("Enter any String:");
    scanf("%s",&str);
    int length = 0;

    while (str[length] != '\0') {
        length++;
    }

    printf("Length of the string: %d\n", length);

    return 0;
}



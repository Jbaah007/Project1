#include <stdio.h>

int main() {
    int number, first_digit, second_digit;

    printf("Enter a two-digit number: ");
    scanf("%d", &number);

    first_digit = number / 10;  // This gets the first digit
    second_digit = number % 10; // This gets the second digit

    printf("The reversal is: %d%d\n", second_digit, first_digit);

    return 0;
}

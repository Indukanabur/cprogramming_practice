#include <stdio.h>

/*
 * Check if a given number is an Armstrong number.
 * An Armstrong number is equal to the sum of its own digits
 * each raised to the power of the number of digits.
 */
int is_armstrong(int number) {
    int original;
    int sum;
    int num_digits;
    int temp;
    int digit;
    int power;
    int i;

    if (number < 0) return 0;

    original = number;
    sum = 0;
    num_digits = 0;
    temp = number;

    /* Count digits. Using do-while to handle 0 correctly. */
    do {
        num_digits++;
        temp /= 10;
    } while (temp != 0);

    temp = number;
    /* Calculate sum of digits raised to the power of num_digits */
    while (temp != 0) {
        digit = temp % 10;
        power = 1;
        for (i = 0; i < num_digits; i++) {
            power *= digit;
        }
        sum += power;
        temp /= 10;
    }

    return sum == original;
}

void find_armstrong_numbers(int start, int end) {
    int i;
    printf("Armstrong numbers between %d and %d:\n", start, end);
    for (i = start; i <= end; i++) {
        if (is_armstrong(i)) {
            printf("%d ", i);
        }
    }
    printf("\n");
}

int main() {
    int num;

    /* Example 1: Check a single number */
    num = 153;
    if (is_armstrong(num))
        printf("%d is an Armstrong number.\n", num);
    else
        printf("%d is NOT an Armstrong number.\n", num);

    /* Example 2: Check another number */
    num = 123;
    if (is_armstrong(num))
        printf("%d is an Armstrong number.\n"

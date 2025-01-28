#include <stdio.h>

int binaryToDecimal(int binary) {
    int decimal = 0;
    int base = 1; // Represents 2^0, 2^1, 2^2, etc.

    while (binary > 0) {
        int lastDigit = binary % 10; // Extract the last digit
        if (lastDigit != 0 && lastDigit != 1) {
            printf("Invalid binary number!\n");
            return -1; // Return -1 for invalid input
        }
        decimal += lastDigit * base;
        base *= 2; // Update base to the next power of 2
        binary /= 10; // Remove the last digit
    }

    return decimal;
}

int main() {
    int binary;

    // Input the binary number
    printf("Enter a binary number: ");
    scanf("%d", &binary);

    // Convert and print the decimal representation
    int decimal = binaryToDecimal(binary);
    if (decimal != -1) {
        printf("Decimal representation: %d\n", decimal);
    }

    return 0;
}
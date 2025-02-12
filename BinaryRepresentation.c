#include <stdio.h>

void decimalToBinary(int n) {
    int binary[32]; 
    int i = 0;

    if (n == 0) {
        printf("0");
        return;
    }

    while (n > 0) {
        binary[i] = n % 2; 
        n = n / 2;         
        i++;
    }

    for (int j = i - 1; j >= 0; j--) {
        printf("%d", binary[j]);
    }
}

int main() {
    int decimalNumber;
    printf("Enter a decimal number: ");
    scanf("%d", &decimalNumber);
    printf("Binary representation: ");
    decimalToBinary(decimalNumber);

    return 0;
}
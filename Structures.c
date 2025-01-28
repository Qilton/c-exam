#include <stdio.h>

struct Imaginary {
    float real;       
    float imaginary;
};

struct Imaginary sum(struct Imaginary num1, struct Imaginary num2) {
    struct Imaginary result;
    result.real = num1.real + num2.real;
    result.imaginary = num1.imaginary + num2.imaginary;
    return result;
}

struct Imaginary multiply(struct Imaginary num1, struct Imaginary num2) {
    struct Imaginary result;
    result.real = (num1.real * num2.real) - (num1.imaginary * num2.imaginary);
    result.imaginary = (num1.real * num2.imaginary) + (num1.imaginary * num2.real);
    return result;
}

struct Imaginary difference(struct Imaginary num1, struct Imaginary num2) {
    struct Imaginary result;
    result.real = num1.real - num2.real;
    result.imaginary = num1.imaginary - num2.imaginary;
    return result;
}

int main() {
    struct Imaginary num1, num2, result_sum, result_difference, result_product;

    printf("Enter the real and imaginary parts of the first complex number: ");
    scanf("%f %f", &num1.real, &num1.imaginary);

    printf("Enter the real and imaginary parts of the second complex number: ");
    scanf("%f %f", &num2.real, &num2.imaginary);

    result_sum = sum(num1, num2);
    result_difference = difference(num1, num2);
    result_product = multiply(num1, num2);

    printf("\nSum: %.2f + %.2fi\n", result_sum.real, result_sum.imaginary);
    printf("Difference: %.2f + %.2fi\n", result_difference.real, result_difference.imaginary);
    printf("Product: %.2f + %.2fi\n", result_product.real, result_product.imaginary);

    return 0;
}

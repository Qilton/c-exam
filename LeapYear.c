#include <stdio.h>

int main() {
    int year;

    printf("Enter a year (YYYY): ");
    scanf("%d", &year);

    // || is OR operator and == is equality operator(It checks whether the first value is equal to second value and returns 1(true) or 0(false))
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
        printf("%d is a leap year.\n", year);
    } else {
        printf("%d is not a leap year.\n", year);
    }

    return 0;
}
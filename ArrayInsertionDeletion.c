#include <stdio.h>

int main() {
    int N;

    // Input the number of characters
    printf("Enter the number of characters (N < 10): ");
    scanf("%d", &N);

    // Check if N is valid
    if (N <= 0 || N >= 10) {
        printf("Invalid input! N must be between 1 and 9.\n");
        return 1;
    }

    char X[10], Y[11], Z[10];
    char newChar;
    int P, Q;

    // Input N characters into array X
    printf("Enter %d characters:\n", N);
    for (int i = 0; i < N; i++) {
        scanf(" %c", &X[i]); // Notice the space before %c to handle newlines
    }

    // Display original array X
    printf("Original Array X: ");
    for (int i = 0; i < N; i++) {
        printf("%c ", X[i]);
    }
    printf("\n");

    // (i) Insert a character at the P-th position
    printf("Enter the character to insert: ");
    scanf(" %c", &newChar);
    printf("Enter the position to insert the character (1 to %d): ", N + 1);
    scanf("%d", &P);

    if (P < 1 || P > N + 1) {
        printf("Invalid position! P must be between 1 and %d.\n", N + 1);
        return 1;
    }

    // Insert the character at position P
    for (int i = 0; i < P - 1; i++) {
        Y[i] = X[i];
    }
    Y[P - 1] = newChar;
    for (int i = P; i <= N; i++) {
        Y[i] = X[i - 1];
    }

    // Display new array Y
    printf("Array after insertion (Y): ");
    for (int i = 0; i <= N; i++) {
        printf("%c ", Y[i]);
    }
    printf("\n");

    // (ii) Delete the character at the Q-th position
    printf("Enter the position to delete the character (1 to %d): ", N + 1);
    scanf("%d", &Q);

    if (Q < 1 || Q > N + 1) {
        printf("Invalid position! Q must be between 1 and %d.\n", N + 1);
        return 1;
    }

    // Delete the character at position Q
    for (int i = 0; i < Q - 1; i++) {
        Z[i] = Y[i];
    }
    for (int i = Q - 1; i < N; i++) {
        Z[i] = Y[i + 1];
    }

    // Display final array Z
    printf("Array after deletion (Z): ");
    for (int i = 0; i < N; i++) {
        printf("%c ", Z[i]);
    }
    printf("\n");

    return 0;
}

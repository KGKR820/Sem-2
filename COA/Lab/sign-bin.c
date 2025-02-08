#include <stdio.h>
void printBinary(int n, int bits) {
    for (int i = bits - 1; i >= 0; i--) {
        printf("%d", (n >> i) & 1);
    }
    printf("\n");
}
void signMagnitude(int n, int bits) {
    int sign = (n < 0) ? 1 : 0;
    int magnitude = abs(n);
    printf("Sign-Magnitude: %d", sign);
    printBinary(magnitude, bits - 1);
}
void onesComplement(int n, int bits) {
    if (n < 0) {
        n = ~(-n) + 1;
    }
    printf("One's Complement: ");
    printBinary(n, bits);
}
void twosComplement(int n, int bits) {
    if (n < 0) {
        n = ~(-n) + 1;
    }
    printf("Two's Complement: ");
    printBinary(n, bits);
}
int main() {
    int n, bits;
    printf("Enter a signed integer: ");
    scanf("%d", &n);
    printf("Enter the number of bits: ");
    scanf("%d", &bits);
    signMagnitude(n, bits);
    onesComplement(n, bits);
    twosComplement(n, bits);
    return 0;
}
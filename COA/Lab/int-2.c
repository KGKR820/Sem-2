#include <stdio.h>
void bin(int n, int bits) {
    for (int i = bits - 1; i >= 0; i--) {
        printf("%d ", (n >> i) & 1);
    }
    printf("\n");
}
int main() {
    int n, bits;
    printf("Enter an integer: ");
    scanf("%d", &n);
    printf("Enter the number of bits: ");
    scanf("%d", &bits);
    int twoc = ~n + 1;
    printf("Two's complement representation: ");
    bin(twoc, bits);
    return 0;
    /*
    User inputs:

n = 5
bits = 5
Calculate the two's complement of n:

n = 5 in binary (5 bits) is 00101.
Bitwise NOT of n (~n): 11010. -> ~5 = -6
Add 1 to the result: 11010 + 1 = 11011.
So, the two's complement of 5 is -5, which in 5-bit binary is 11011.
Print the two's complement representation:

The bin function is called with twoc = -5 and bits = 5.
The function prints each bit from the most significant bit to the least significant bit:
twoc >> 4 gives 1 (most significant bit).
twoc >> 3 gives 1.
twoc >> 2 gives 0.
twoc >> 1 gives 1.
twoc >> 0 gives 1 (least significant bit).
    */
}
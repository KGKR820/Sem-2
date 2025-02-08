#include <stdio.h>
#include <stdlib.h>

void sb(int n, int b) {
    unsigned int max = (1U << b) - 1;
    unsigned int bin = n & max;
    unsigned int one = ~bin & max;
    unsigned int two = (one + 1) & max;
    printf("Sign-Magnitude: %d", n < 0);
    for (int i = b - 2; i >= 0; i--)
        printf("%d", (abs(n) >> i) & 1);
    printf("\nOne -> ");
    for (int i = b - 1; i >= 0; i--)
        printf("%d", (n < 0 ?(one >> i) &1 : (bin >> i)& 1));
    printf("\nTwo -> ");
    for (int i = b - 1; i >= 0; i--)
        printf("%d", (n < 0 ?(two >> i) &1 : (bin >> i)& 1));

    printf("\n");
}
int main() {
    int n, b;
    printf("Enter the bit system: ");
    scanf("%d", &b);
    printf("Enter a signed integer: ");
    scanf("%d", &n);
    sb(n, b);
    return 0;
}

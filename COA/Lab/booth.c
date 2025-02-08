#include <stdio.h>
#include <stdlib.h>
void bin(int n, int bin[], int size) {
    for (int i = 0; i < size; i++) {
        bin[i] = (n >> i) & 1;
    }
}
void addbin(int a[], int b[], int result[], int size) {
    int carry = 0;
    for (int i = 0; i < size; i++) {
        result[i] = a[i] + b[i] + carry;
        carry = result[i] / 2;
        result[i] %= 2;
    }
}
void ars(int a[], int q[], int *q1, int size) {
    int msb = a[size - 1];
    *q1 = q[0];
    for (int i = 0; i < size - 1; i++) {
        q[i] = q[i + 1];
    }
    q[size - 1] = a[0];
    for (int i = 0; i < size - 1; i++) {
        a[i] = a[i + 1];
    }
    a[size - 1] = msb;
}
void booth(int m, int r, int size) {
    int A[32] = {0}; 
    int Q[32] = {0};
    int M[32] = {0};
    int Mn[32] = {0};
    int q1 = 0;
    bin(m, M, size);
    bin(-m, Mn, size);
    bin(r, Q, size);
    for (int i = 0; i < size; i++) {
        if (Q[0] == 1 && q1 == 0) {
            addbin(A, Mn, A, size);
        } else if (Q[0] == 0 && q1 == 1) {
            addbin(A,M, A, size);
        }
        ars(A, Q,&q1, size);
    }
    printf("Product: ");
    for (int i = size - 1; i >= 0; i--) {
        printf("%d ", A[i]);
    }
    for (int i = size - 1; i >= 0; i--) {
        printf("%d ", Q[i]);
    }
    printf("\n");
}
int main() {
    int m, r, size;
    printf("Enter the multiplicand: ");
    scanf("%d", &m);
    printf("Enter the multiplier: ");
    scanf("%d", &r);
    printf("Enter the bit size: ");
    scanf("%d", &size);
    booth(m, r, size);
    return 0;
}
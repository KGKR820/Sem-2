#include <stdio.h>
#include <math.h>
void dec_bin(int num, int bits, int bin[])
 {
    int neg = num < 0;
    if (neg) 
    {
        num = -num;  
    }
    for (int i = bits - 1; i >= 0; i--)
     {
        bin[i] = num % 2;
        num /= 2;
    }
    if (neg)
     {
        bin[0] = 1; 
    } 
    else
     {
        bin[0] = 0;  
    }
}
void bin(int bin[], int bits) 
{
    for (int i = 0; i < bits; i++)
     {
        printf("%d", bin[i]);
    }
    printf("\n");
}
int main()
 {
    char choice;
    do {
        int num1, num2, bits;
        int num1, num2, bits;
        printf("1st: ");
        scanf("%d", &num1);
        printf("2nd: ");
        scanf("%d", &num2);
        printf("bits: ");
        scanf("%d", &bits);
        int r = num1 + num2;
        int bin1[bits], bin2[bits], result[bits];
        dec_bin(num1, bits, bin1);
        dec_bin(num2, bits, bin2);
        dec_bin(r, bits, result);
        printf("%d-bit bin equivalent of %d: ", bits, num1);
        bin(bin1, bits);
        printf("%d-bit bin equivalent of %d: ", bits, num2);
        bin(bin2, bits);
        printf("bin Addition Result: ");
        bin(result, bits);
        printf("Decimal Addition Result: %d\n", r);
        printf("Do you want to add more numbers (Input either Y (Yes) or N (No)): ");
        scanf(" %c", &choice);
    } while (choice == 'Y' || choice == 'y');
    return 0;
}
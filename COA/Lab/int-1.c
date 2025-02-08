#include <stdio.h>
void bin(int a,int b) {
    for (int i = b-1; i >= 0; i--) {
        // a>>i means it shifts the bits by i numbers to right
        // & 1 snatches out the single bit at the end of a>>i
        // Then ! turns 0 -> 1 and 1 -> 0
        printf("%d ", !((a >> i) & 1));
    }
    /*
    Assume a=5,b=5
    5 -> 00101
    a>>4 -> 00000 (&1) -> 0 (!) -> 1[first bit 1's compliment]
     a>>3 -> 00000 (&1) -> 0 (!) -> 1[2nd bit 1's compliment]
      a>>2 -> 00001(&1) -> 1 (!) -> 0[3rd bit 1's compliment]
       a>>1 -> 00010 (&1) -> 0 (!) -> 0[4th bit 1's compliment]
       a>>0 -> 00101(&1) -> 1 (!) -> 0[1st bit 1's compliment]
    */
}
int main() {
    int a;
    printf("Enter a number -> ");
    scanf("%d", &a);
   int b;
   printf("Enter the no.of bits -> ");
   scanf("%d",&b);
    bin(a,b);
    printf("\n");
    return 0;
}
#include <stdio.h>
#include <math.h>
int main(){
int a;
printf("Enter binary code -> ");
scanf("%d",&a);
int b = a,m=0;
while(b > 0){
 b = b/10;
 m++;
}
int sum = 0;
int i =0;
while(a > 0 && i<m){
    int ld = a%10;
    a = a/10;
    sum = sum+ld*(pow(2,i));
    i++;
}
printf("%d",sum);
    return 0;
}
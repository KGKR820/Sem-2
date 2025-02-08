#include <stdio.h>
void bin (int a){
    if(a >=2 ){
        a = a/2;
        bin(a);
        printf("%d ",a%2);
    }
    else return;
}
int main(){
int a;
printf("Enter a number -> ");
scanf("%d",&a);
int sum = 0;
while(a > 0){
    int ld = a%10;
     a = a/10;
     sum = sum*10;
     sum = sum + ld;  
}
while(sum > 0){
    int m = sum%10;
    sum = sum/10;
    bin(2*m);
}
    return 0;
}
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
bin(2*a);
    return 0;
}
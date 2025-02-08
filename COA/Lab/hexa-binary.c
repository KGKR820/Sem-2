#include <stdio.h>
#include <string.h>
void bin (int a){
    if(a >=2 ){
        a = a/2;
        bin(a);
        printf("%d ",a%2);
    }
    else return;
}
int main(){
char str[20];
int n = strlen(str);
scanf("%s",str);
for(int i=0;i<n;i++){
    if(str[i] >= 65){
        str[i] = str[i] - 55;
        bin(2*str[i]);
    }
    else{
        str[i] = str[i] - 48;
        bin(2*str[i]);
    }
}
    return 0;
}
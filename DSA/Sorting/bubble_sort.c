#include <stdio.h>
#include <limits.h>
int main(){
int arr[4] = {3,2,4,8};
for(int i=0;i<4;i++){
   for(int j=0;j<4;j++){
    if(arr[i] <= arr[j]){
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }
   }
}
for(int i=0;i<4;i++){
    printf("%d ",arr[i]);
}
return 0;
}
// output -> 2 3 4 8 
#include <stdio.h>
#define size 100
typedef struct stack{
    int arr[size];
     int top;
}stack;
void create(stack *p){
    p -> top = -1;
}
void push(stack *p,int d){
    (p->top)++;
    p->arr[p->top] = d;
}
void pop(stack *p) {
    p->top  = p->top -1;
}
int main (){
stack a;
create(&a);
push(&a,6);
push(&a,7);
printf("%d",a.arr[a.top]);
pop(&a);
printf("\n%d",a.arr[a.top]);
push(&a,9);
printf("\n%d",a.arr[a.top]);

    return 0;
}
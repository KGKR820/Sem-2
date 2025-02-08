#include <stdio.h>
#include <stdlib.h>
typedef struct node{
    int data;
    struct node *next;
}node;
void print(node *p){
    node *temp = p;
   do{
    printf("%d\n",p->data);
       p = p->next;
   }while(p != temp);
}
void del(node *p,int index){
    int i =1;
   while(i != index -1){
    p = p-> next;
    i++;
   }
   node *temp = p;
   temp ->next = temp -> next -> next;
   p -> next = temp -> next;
}
void insert(node *p,int index){
    int i=1;
    while(i != index){
        
    }
}
int main(){
node*head= (node*)malloc(sizeof(node));
node*two= (node*)malloc(sizeof(node));
node*three= (node*)malloc(sizeof(node));
head -> data = 1;
head -> next = two;
two -> data = 2;
two -> next = three;
three -> data = 3;
three -> next = head;
print(head);
del(head,3);
printf("\n");
print(head);
    return 0;
}
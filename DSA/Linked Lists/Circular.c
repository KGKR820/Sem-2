#include <stdio.h>
#include <stdlib.h>
typedef struct node{
    int data;
    struct node *next;
}node;
void print(node *p){
    node *temp = p;
   do{
    printf("%d -> ",p->data);
       p = p->next;
   }while(p != temp);
   printf("NULL\n");
}
void del(node **p,int index){
    node *temp = *p;
    node *q = *p;
    if(index ==1){
      *p = temp -> next;
      free(temp);
      return;
    }
    else{
        int i=1;
        while(i != index-1){
             q = q->next;
             i++;
        }
        node *tem = q->next;
        q->next = tem->next;
        free(tem);
     }
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
del(&head,1);
print(head);
    return 0;
}
#include <stdio.h>
#include <stdlib.h>
typedef struct node{
    int data;
    struct node *next;
}node;
void inti(int size,node **head){
    node *p = NULL;
    for(int i=0;i<size;i++){
        node *ex = malloc(sizeof(node));
        printf("e%d -> ",i+1);
        scanf("%d",&ex -> data);
        ex-> next = NULL;
        if (*head == NULL) {
            *head = ex;
            p=ex;
        } else {
            p->next = ex;
            p = ex;
        }
    }
}
void del(node*p,int index){
    int i=1;
   while(i != index-1){
        p = p->next;
        i++;
   }
   node *temp = p-> next;
   p->next = temp->next;
}
void print(node*p){
    while(p != NULL){
        printf(" %d -> ",p->data);
    p = p->next;
    }
    printf("NULL");
}
void kdel(node*p,int k){

}
int main(){
node *head = NULL;
int s1;
    printf("size of list 1->");
    scanf("%d",&s1);
    inti(s1,&head);
    kdel(head,3);
    print(head);
    return 0;
}
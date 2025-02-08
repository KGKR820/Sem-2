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
void insert(node*p,int index,int data){
     node*ex= (node*)malloc(sizeof(node)); 
     ex->data = data;
    int i =1;
    while(i != index){
    p = p->next;
    i++;
 }  
   ex -> next = p->next;
   p-> next = ex;
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
void search(node*p,int s){
   int m =0 ;
    while(p != NULL){
        if(p->data == s){
            m = 1;
            break;
        }
        p = p->next;
    }
    (m==0)?printf("\nFalse"):printf("\nTrue");
}
int main(){
node *head = NULL;
inti(3,&head);
insert(head,1,4);
print(head);
del(head,2);
printf("\n");
print(head);
search(head,9);
    return 0;
}
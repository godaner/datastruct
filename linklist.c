#include <stdio.h>
#include <malloc.h>
typedef int ElemType;
typedef struct LNode {
    ElemType elem;
    struct LNode *next;
} LNode, L;

int Print(L *l,char *prefix) {
    int i =0;
    LNode *s = l;
    printf("%s==>\t", prefix);
    while(s->next!=NULL){
        i++;
        s = s->next;
        printf("%d, ",s->elem);
    }
    printf("==>\tlen is: %d\n",i);
    return 1;
}
int HeadInsert(L *l,const int arr[], int size) {
    LNode *s ;
    for(int i=0;i<size;i++){
        s= (LNode*)malloc(sizeof (LNode)*1);
        s->elem=arr[i];
        s->next = l->next;
        l->next=s;
    }
    return 1;
}
int TailInsert(L *l,const int arr[], int size) {
    LNode *tail = l;
    LNode *c = l->next;
    while (c!=NULL){
        tail = c;
        c= c->next;
    }
    LNode *t ;
    for(int i=0;i<size;i++){
        t= (LNode*)malloc(sizeof (LNode)*1);
        t->elem=arr[i];
        t->next = NULL;
        tail->next = t;
        tail=t;
    }
    return 1;
}
L * Create() {
    L *l=malloc(sizeof(LNode)*1);
    l->elem=0;
    l->next = NULL;
    return l;
}
int main() {
    int arr[]={0,1,2,3,4,5,6,7,8,9};
    L* l= Create();
    // HeadInsert
    HeadInsert(l,arr,sizeof(arr)/sizeof(arr[0]));
    Print(l,"HeadInsert");

    // TailInsert
    TailInsert(l,arr,sizeof(arr)/sizeof(arr[0]));
    Print(l,"TailInsert");
    return 0;
}
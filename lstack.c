#include <stdio.h>
#include <u.h>
#include <malloc.h>

typedef struct LNode {
    ElemType e;
    struct LNode *next;
} LNode, L;
typedef struct LStack {
    L *l;
} LStack, S;

int Length(S *s) {
    int i = 0;
    LNode *c = s->l;
    while (c->next) {
        i++;
        c = c->next;
    }
    return i;
}

int Print(S *s, char *prefix) {
    printf("%s==>\t", prefix);
    LNode *c = s->l;
    while (c->next) {
        c = c->next;
        printf("%d, ", c->e);
    }
    printf("==>\tlen is: %d\n", Length(s));
    return 1;
}

Bool Init(S *s) {
    s->l = malloc(sizeof(LNode));
    s->l->e = 0;
    s->l->next = NULL;
    return true;
}

Bool Push(S *s, ElemType e) {
    LNode *n = malloc(sizeof(LNode));
    n->next = s->l->next;
    n->e = e;
    s->l->next = n;
    return true;
}

Bool StackEmpty(S *s) {
    if (s->l->next == NULL) {
        return true;
    }
    return false;
}

Bool Pop(S *s, ElemType *e) {
    if (StackEmpty(s)) {
        return false;
    }
    *e = s->l->next->e;
    LNode *m = s->l->next;
    s->l->next = m->next;
    free(m);
    return true;
}

Bool Get(S *s, ElemType *e) {
    if (StackEmpty(s)) {
        return false;
    }
    *e = s->l->next->e;
    return true;
}

int main() {
    S s;
    // Init
    Init(&s);
    Print(&s, "Init");

    // Push
    ElemType e = 11;
    Push(&s, e);
    e = 22;
    Push(&s, e);
    e = 33;
    Push(&s, e);
    Print(&s, "Push");


    // Get
    Bool b = Get(&s, &e);
    printf("Get is: %d %d\n", b, e);
    Print(&s, "Get");

    // Pop
    b = Pop(&s, &e);
    printf("Pop is: %d %d\n", b, e);
    Print(&s, "Pop");

    b = Pop(&s, &e);
    printf("Pop is: %d %d\n", b, e);
    Print(&s, "Pop");

    return 1;
}
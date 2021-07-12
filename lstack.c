#include <stdio.h>
#include <u.h>
#include <malloc.h>
#include <lstack.h>

int StackLength(S *s) {
    int i = 0;
    StackLNode *c = s->l;
    while (c->next) {
        i++;
        c = c->next;
    }
    return i;
}

int StackPrint(S *s, char *prefix) {
    printf("%s==>\t", prefix);
    StackLNode *c = s->l;
    while (c->next) {
        c = c->next;
        printf("%d, ", c->e);
    }
    printf("==>\tlen is: %d\n", StackLength(s));
    return 1;
}

Bool StackInit(S *s) {
    s->l = malloc(sizeof(StackLNode));
    s->l->e = 0;
    s->l->next = NULL;
    return true;
}

Bool StackPush(S *s, ElemType e) {
    StackLNode *n = malloc(sizeof(StackLNode));
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

Bool StackPop(S *s, ElemType *e) {
    if (StackEmpty(s)) {
        return false;
    }
    *e = s->l->next->e;
    StackLNode *m = s->l->next;
    s->l->next = m->next;
    free(m);
    return true;
}

Bool StackGet(S *s, ElemType *e) {
    if (StackEmpty(s)) {
        return false;
    }
    *e = s->l->next->e;
    return true;
}

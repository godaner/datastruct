#include <stdio.h>
#include <malloc.h>
#include <u.h>
#include <linklist.h>

int ListPrint(L *l, char *prefix) {
    int i = 0;
    LNode *s = l;
    printf("%s==>\t", prefix);
    while (s->next != NULL) {
        i++;
        s = s->next;
        printf("%d, ", s->elem);
    }
    printf("==>\tlen is: %d\n", i);
    return 1;
}

int ListHeadInsert(L *l, const int arr[], int size) {
    LNode *s;
    for (int i = 0; i < size; i++) {
        s = (LNode *) malloc(sizeof(LNode) * 1);
        s->elem = arr[i];
        s->next = l->next;
        l->next = s;
    }
    return 1;
}

int ListTailInsert(L *l, const int arr[], int size) {
    LNode *tail = l;
    LNode *c = l->next;
    while (c != NULL) {
        tail = c;
        c = c->next;
    }
    LNode *t;
    for (int i = 0; i < size; i++) {
        t = (LNode *) malloc(sizeof(LNode) * 1);
        t->elem = arr[i];
        t->next = NULL;
        tail->next = t;
        tail = t;
    }
    return 1;
}

// Insert 注意，可能插入到第一个
int ListInsert(L *l, ElemType e, int i) {
    if (i < 1) {
        return 0;
    }
    LNode *c = l;
    int j = 0; // !!!
    while (c != NULL && j++ != i - 1) {
        c = c->next;
    }
    if (c == NULL) {
        return 0;
    }
    LNode *n = malloc(sizeof(LNode) * 1);
    n->elem = e;
    n->next = c->next;
    c->next = n;
    return 1;
}

int ListDelete(L *l, int i) {
    if (i < 1) {
        return 0;
    }
    LNode *c = l;
    int j = 0; // !!!
    while (c != NULL && j++ != i - 1) {
        c = c->next;
    }
    if (c == NULL || c->next == NULL) {
        return 0;
    }
    LNode *n = c->next;
    c->next = n->next;
    free(n);
    return 1;
}

LNode *ListFindByElem(L *l, ElemType e) {
    LNode *c = l->next;
    while (c) {
        if (c->elem == e) {
            return c;
        }
        c = c->next;
    }
    return NULL;
}

// 等于0返回头节点
LNode *ListFindByIndex(L *l, int i) {
    if (i < 0) {
        return 0;
    }
    LNode *c = l;
    int j = 0;
    while (c != NULL && i != j++) {
        c = c->next;
    }
    return c;
}

int ListLength(L *l) {
    int len = 0;
    LNode *c = l;
    while (c->next) {
        len++;
        c = c->next;
    }
    return len;
}

L *ListCreate() {
    L *l = malloc(sizeof(LNode) * 1);
    l->elem = 0;
    l->next = NULL;
    return l;
}

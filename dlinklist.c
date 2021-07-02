#include <stdio.h>
#include <u.h>
#include <malloc.h>

// DLNode 查找等和单链表相同，删除插入不同
typedef struct DLNode {
    ElemType elem;
    struct DLNode *prior, *next;
} DLNode, L;


DLNode *FindByIndex(L *pNode, int i);

int Print(L *l, char *prefix) {
    int i = 0;
    DLNode *s = l;
    printf("%s==>\t", prefix);
    while (s->next != NULL) {
        i++;
        s = s->next;
        printf("%d, ", s->elem);
    }
    printf("==>\tlen is: %d\n", i);
    return 1;
}

// Insert 注意，可能插入到第一个
int Insert(L *l, ElemType e, int i) {
    if (i < 1) {
        return 0;
    }
    int j = 0;
    DLNode *c = l;
    while (c->next && j != i - 1) {
        c = c->next;
        j++;
    }
    DLNode *n = malloc(sizeof(DLNode));
    n->elem = e;
    if (c->next != NULL) {
        c->next->prior = n;
    }
    n->next = c->next;
    n->prior = c;
    c->next = n;
    return 1;
}

int Delete(L *l, int i) {
    if (i < 1) {
        return 0;
    }
    DLNode *c = FindByIndex(l, i - 1);
    if (c == NULL) {
        return 1;
    }
    DLNode *m = c->next;
    if (m == NULL) {
        return 1;
    }
    if (m->next == NULL) {
        c->next = NULL;
        free(m);
        return 1;
    }
    c->next = m->next;
    m->next->prior = c;
    free(m);
    return 1;
}


DLNode *FindByElem(L *l, ElemType e) {
    DLNode *c = l->next;
    while (c) {
        if (c->elem == e) {
            return c;
        }
        c = c->next;
    }
    return NULL;
}

// 等于0返回头节点
DLNode *FindByIndex(L *l, int i) {
    if (i < 0) {
        return 0;
    }
    DLNode *c = l;
    int j = 0;
    while (c != NULL && i != j++) {
        c = c->next;
    }
    return c;
}

int Length(L *l) {
    int len = 0;
    DLNode *c = l;
    while (c->next) {
        len++;
        c = c->next;
    }
    return len;
}

L *Create() {
    L *l = malloc(sizeof(DLNode) * 1);
    l->elem = 0;
    l->next = l->prior = NULL;
    return l;
}

int main() {
    L *l = Create();

    // Insert
    ElemType e = 0;
    Insert(l, e, 21);
    e = 1;
    Insert(l, e, 1);
    e = 2;
    Insert(l, e, 1);
    e = 33;
    Insert(l, e, 1);
    e = 41;
    Insert(l, e, 1);
    e = 2;
    Insert(l, e, 2);
    Print(l, "Insert");

    // FindByIndex
    DLNode *n = FindByIndex(l, 3);
    printf("FindByIndex is: %d\n", n->elem);
    Print(l, "FindByIndex");

    // FindByElem
    n = FindByElem(l, 0);
    printf("FindByElem is: %d\n", n->elem);
    Print(l, "FindByElem");

    // Delete
    Delete(l, 1);
    Delete(l, 21);
    Delete(l, 21);
    Delete(l, 0);
    Delete(l, 4);
    Delete(l, 4);
    Print(l, "Delete");

    // Length
    int len = Length(l);
    printf("Length is: %d\n", len);
    Print(l, "Length");

    return 0;
}
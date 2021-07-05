#include <stdio.h>
#include <malloc.h>
#include <u.h>

#define  MAXSIZE 100

typedef struct SqStack {
    ElemType *elem;
    int top;
} SqStack, S;


int Init(S *s) {
    if (s == NULL) {
        return 0;
    }
    s->elem = malloc(sizeof(ElemType) * MAXSIZE);
    s->top = 0;
    return 1;
}

int Length(S *s) {
    return s->top;
}

int Print(S *s, char *prefix) {
    printf("%s==>\t", prefix);
    for (int i = 0; i < Length(s); i++) {
        printf("%d, ", s->elem[i]);
    }
    printf("==>\tlen is: %d\n", Length(s));
    return 1;
}


int StackEmpty(S *s) {
    if (s == NULL || s->top == 0) {
        return 1;
    }
    return 0;
}

int Pop(S *s, ElemType *e) {
    if (StackEmpty(s)) {
        return 0;
    }
    *e = s->elem[--s->top];
    return 1;
}

int Get(S *s, ElemType *e) {
    if (StackEmpty(s)) {
        return 0;
    }
    *e = s->elem[s->top - 1];
    return 1;
}


int Push(S *s, ElemType e) {
    if (s == NULL || Length(s) == MAXSIZE) { // !!!
        return 0;
    }
    s->elem[s->top++] = e;
    return 1;
}


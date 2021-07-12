#ifndef DATASTRUCT_LSTACK_H
#define DATASTRUCT_LSTACK_H

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

int Length(S *s);

int Print(S *s, char *prefix);

Bool Init(S *s);

Bool Push(S *s, ElemType e);

Bool StackEmpty(S *s);

Bool Pop(S *s, ElemType *e);

Bool Get(S *s, ElemType *e);

#endif //DATASTRUCT_LSTACK_H

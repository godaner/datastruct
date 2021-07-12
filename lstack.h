#ifndef DATASTRUCT_LSTACK_H
#define DATASTRUCT_LSTACK_H

#include <stdio.h>
#include <u.h>
#include <malloc.h>

typedef struct StackLNode {
    ElemType e;
    struct StackLNode *next;
} StackLNode, StackL;
typedef struct LStack {
    StackLNode *l;
} LStack, S;

int StackLength(S *s);

int StackPrint(S *s, char *prefix);

Bool StackInit(S *s);

Bool StackPush(S *s, ElemType e);

Bool StackEmpty(S *s);

Bool StackPop(S *s, ElemType *e);

Bool StackGet(S *s, ElemType *e);

#endif //DATASTRUCT_LSTACK_H

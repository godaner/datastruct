//
// Created by godaner on 2021/7/14.
//

#ifndef DATASTRUCT_LQUEUE_H
#define DATASTRUCT_LQUEUE_H

#include <stdio.h>
#include <u.h>
#include <malloc.h>

typedef struct QueueLNode {
    ElemType e;
    struct QueueLNode *next;
} QueueLNode, QueueL;
typedef struct LQueue {
    QueueLNode *front, *rear;
} LQueue, Q;


Bool QueueInit(Q *q);

int QueueEmpty(Q *q);

int QueueLength(Q *q);

int QueuePrint(Q *q, char *prefix);

Bool EnQueue(Q *q, ElemType e);

Bool DeQueue(Q *q, ElemType *e);

#endif //DATASTRUCT_LQUEUE_H

#include <u.h>
#include <malloc.h>
#include <stdio.h>

#define MAXSIZE 4 // actually MAXSIZE-1
typedef struct SqQueue {
    ElemType *elem;
    int front, rear;
} SqQueue, Q;

int Length(Q *q) {
    return (q->rear - q->front + MAXSIZE) % MAXSIZE;
}

int Print(Q *q, char *prefix) {
    printf("%s==>\t", prefix);
    for (int i = 0; i < Length(q); i++) {
        printf("%d, ", q->elem[(q->front + i + MAXSIZE) % MAXSIZE]);
    }
    printf("==>\tlen is: %d\n", Length(q));
    return 1;
}


int InitQueue(Q *q) {
    q->rear = q->front = 0;
    q->elem = malloc(sizeof(ElemType) * MAXSIZE);
    return 1;
}

int QueueEmpty(Q *q) {
    return q->front == q->rear;
}

int QueueFull(Q *q) {
    return q->front == (q->rear + 1) % MAXSIZE;
}

int EnQueue(Q *q, ElemType e) {
    if (QueueFull(q)) {
        return 0;
    }
    q->elem[q->rear] = e;
    q->rear = (q->rear + 1) % MAXSIZE;
    return 1;
}

int DeQueue(Q *q, ElemType *e) {
    if (QueueEmpty(q)) {
        return 0;
    }
    *e = q->elem[q->front];
    q->front = (q->front + 1) % MAXSIZE;
    return 1;
}

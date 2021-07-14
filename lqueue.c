#include <stdio.h>
#include <u.h>
#include <malloc.h>
#include <lqueue.h>

Bool QueueInit(Q *q) {
    QueueLNode *n = malloc(sizeof(QueueLNode) * 1);
    n->next = NULL;
    n->e = 0;
    q->rear = q->front = n;
    return true;
}

int QueueEmpty(Q *q) {
    return q->front == q->rear;
}

int QueueLength(Q *q) {
    QueueLNode *c = q->front;
    int i = 0;
    while (c->next) {
        c = c->next;
        i++;
    }
    return i;
}

int QueuePrint(Q *q, char *prefix) {
    printf("%s==>\t", prefix);
    QueueLNode *c = q->front;
    while (c->next) {
        c = c->next;
        printf("%d, ", c->e);
    }
    printf("==>\tlen is: %d\n", QueueLength(q));
    return 1;
}

Bool EnQueue(Q *q, ElemType e) {
    QueueLNode *n = malloc(sizeof(QueueLNode));
    n->next = NULL;
    n->e = e;
    q->rear->next = n;
    q->rear = n;// !!!
    return true;
}

Bool DeQueue(Q *q, ElemType *e) {
    if (QueueEmpty(q)) {
        return false;
    }
    QueueLNode *n = q->front->next;
    *e = n->e;
    q->front->next = n->next;
    free(n);
    // !!!
    if (n == q->rear) {
        q->rear = q->front;
    }
    return true;
}

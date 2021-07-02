#include <stdio.h>
#include <u.h>
#include <malloc.h>

typedef struct LNode {
    ElemType e;
    struct LNode *next;
} LNode, L;
typedef struct LQueue {
    LNode *front, *rear;
} LQueue, Q;


Bool Init(Q *q) {
    LNode *n = malloc(sizeof(LNode) * 1);
    n->next = NULL;
    n->e = 0;
    q->rear = q->front = n;
    return true;
}

int QueueEmpty(Q *q) {
    return q->front == q->rear;
}

int Length(Q *q) {
    LNode *c = q->front;
    int i = 0;
    while (c->next) {
        c = c->next;
        i++;
    }
    return i;
}

int Print(Q *q, char *prefix) {
    printf("%s==>\t", prefix);
    LNode *c = q->front;
    while (c->next) {
        c = c->next;
        printf("%d, ", c->e);
    }
    printf("==>\tlen is: %d\n", Length(q));
    return 1;
}

Bool EnQueue(Q *q, ElemType e) {
    LNode *n = malloc(sizeof(LNode));
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
    LNode *n = q->front->next;
    *e = n->e;
    q->front->next = n->next;
    free(n);
    // !!!
    if (n == q->rear) {
        q->rear = q->front;
    }
    return true;
}

int main() {
    Q q;

    // Init
    Init(&q);
    Print(&q, "Init");

    // EnQueue
    ElemType e = 1;
    EnQueue(&q, e);
    e = 2;
    EnQueue(&q, e);
    e = 3;
    EnQueue(&q, e);
    Print(&q, "EnQueue");

    // DeQueue
    Bool b;
    b = DeQueue(&q, &e);
    printf("DeQueue is: %d, %d\n", b, e);
    Print(&q, "DeQueue");

    b = DeQueue(&q, &e);
    printf("DeQueue is: %d, %d\n", b, e);
    Print(&q, "DeQueue");

    b = DeQueue(&q, &e);
    printf("DeQueue is: %d, %d\n", b, e);
    Print(&q, "DeQueue");

    b = DeQueue(&q, &e);
    printf("DeQueue is: %d, %d\n", b, e);
    Print(&q, "DeQueue");

    return 0;
}
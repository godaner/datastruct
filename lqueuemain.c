#include <stdio.h>
#include <u.h>
#include <lqueue.h>


int main() {
    Q q;

    // Init
    QueueInit(&q);
    QueuePrint(&q, "Init");

    // EnQueue
    ElemType e = 1;
    EnQueue(&q, e);
    e = 2;
    EnQueue(&q, e);
    e = 3;
    EnQueue(&q, e);
    QueuePrint(&q, "EnQueue");

    // DeQueue
    Bool b;
    b = DeQueue(&q, &e);
    printf("DeQueue is: %d, %d\n", b, e);
    QueuePrint(&q, "DeQueue");

    b = DeQueue(&q, &e);
    printf("DeQueue is: %d, %d\n", b, e);
    QueuePrint(&q, "DeQueue");

    b = DeQueue(&q, &e);
    printf("DeQueue is: %d, %d\n", b, e);
    QueuePrint(&q, "DeQueue");

    b = DeQueue(&q, &e);
    printf("DeQueue is: %d, %d\n", b, e);
    QueuePrint(&q, "DeQueue");

    return 0;
}
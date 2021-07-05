#include <stdio.h>
#include <u.h>
#include <lqueue.c>


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
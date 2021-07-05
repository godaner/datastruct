#include <u.h>
#include <stdio.h>
#include <sqqueue.c>

int main() {
    Q q;
    // InitQueue
    InitQueue(&q);
    Print(&q, "InitQueue");

    // EnQueue
    ElemType e = 10;
    EnQueue(&q, e);
    e = 20;
    EnQueue(&q, e);
    e = 30;
    EnQueue(&q, e);
    Print(&q, "EnQueue");


    DeQueue(&q, &e);
    printf("DeQueue is: %d\n", e);
    Print(&q, "DeQueue");
    return 1;
}
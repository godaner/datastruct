#include <stdio.h>
#include <u.h>
#include <lstack.h>

int main() {
    S s;
    // Init
    StackInit(&s);
    StackPrint(&s, "Init");

    // Push
    ElemType e = 11;
    StackPush(&s, e);
    e = 22;
    StackPush(&s, e);
    e = 33;
    StackPush(&s, e);
    StackPrint(&s, "Push");


    // Get
    Bool b = StackGet(&s, &e);
    printf("Get is: %d %d\n", b, e);
    StackPrint(&s, "Get");

    // Pop
    b = StackPop(&s, &e);
    printf("Pop is: %d %d\n", b, e);
    StackPrint(&s, "Pop");

    b = StackPop(&s, &e);
    printf("Pop is: %d %d\n", b, e);
    StackPrint(&s, "Pop");

    return 1;
}
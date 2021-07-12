#include <stdio.h>
#include <u.h>
#include <lstack.h>

int main() {
    S s;
    // Init
    Init(&s);
    Print(&s, "Init");

    // Push
    ElemType e = 11;
    Push(&s, e);
    e = 22;
    Push(&s, e);
    e = 33;
    Push(&s, e);
    Print(&s, "Push");


    // Get
    Bool b = Get(&s, &e);
    printf("Get is: %d %d\n", b, e);
    Print(&s, "Get");

    // Pop
    b = Pop(&s, &e);
    printf("Pop is: %d %d\n", b, e);
    Print(&s, "Pop");

    b = Pop(&s, &e);
    printf("Pop is: %d %d\n", b, e);
    Print(&s, "Pop");

    return 1;
}
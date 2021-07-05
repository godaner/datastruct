#include <stdio.h>
#include <u.h>
#include <sqstack.c>

int main() {
    S s;
    ElemType r = 0;
    // Init
    Init(&s);
    Print(&s, "Init");

    // Push
    ElemType e = 1;
    Push(&s, e);
    e = 2;
    Push(&s, e);
    e = 3;
    Push(&s, e);
    Print(&s, "Push");


    Get(&s, &r);
    printf("Get is: %d\n", r);
    Print(&s, "Get");

    Pop(&s, &r);
    printf("Pop is: %d\n", r);
    Print(&s, "Pop");

    return 0;
}
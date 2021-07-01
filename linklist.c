#include <stdio.h>

typedef int ElemType;
typedef struct LNode {
    ElemType elem;
    struct LNode *Next;
} LNode, L;

int Init(L *l) {
    return 1;
}

int main() {
    printf("ccc\n");
    return 0;
}
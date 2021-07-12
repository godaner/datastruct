#include <binarytree.h>
#include <lstack.h>
#include <u.h>

T *createNode(const ElemType *e, int size, int cNum) {
    if (cNum > size) {
        return NULL;
    }
    T *node = malloc(sizeof(T));
    node->e = e[cNum - 1];
    node->Lc = createNode(e, size, cNum * 2);
    node->Rc = createNode(e, size, cNum * 2 + 1);
    return node;
}

// CreateTree 通过其顺序储存建立反向建立
T *CreateTree(ElemType *e, int size) {
    return createNode(e, size, 1);
}

#include <binarytree.h>
#include <u.h>

T *createNode(const ElemType *e, int size, int cNum) {
    if (cNum > size) {
        return NULL;
    }
    if (e[cNum - 1] <= 0) {
        return NULL;
    }
    T *node = malloc(sizeof(T));
    node->e = e[cNum - 1];
    node->Lc = createNode(e, size, cNum * 2);
    node->Rc = createNode(e, size, cNum * 2 + 1);
    return node;
}

bool TreePreOrder(T *t, L *l) {
    if (!t || !l) {
        return false;
    }
    ListInsert(l, t->e, ListLength(l) + 1);
    TreePreOrder(t->Lc, l);
    TreePreOrder(t->Rc, l);
}

bool TreeInOrder(T *t, L *l) {
    if (!t || !l) {
        return false;
    }
    TreeInOrder(t->Lc, l);
    ListInsert(l, t->e, ListLength(l) + 1);
    TreeInOrder(t->Rc, l);
}

bool TreePostOrder(T *t, L *l) {
    if (!t || !l) {
        return false;
    }
    TreePostOrder(t->Lc, l);
    TreePostOrder(t->Rc, l);
    ListInsert(l, t->e, ListLength(l) + 1);
}

// TreeCreate 通过其顺序储存建立反向建立
T *TreeCreate(ElemType *e, int size) {
    return createNode(e, size, 1);
}

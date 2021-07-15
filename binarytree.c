#include <binarytree.h>
#include <u.h>


T *treeCreateByArr(const ElemType *e, int size, int cNum) {
    if (cNum > size) {
        return NULL;
    }
    if (e[cNum - 1] <= 0) {
        return NULL;
    }
    T *node = malloc(sizeof(T));
    node->e = e[cNum - 1];
    node->Lc = treeCreateByArr(e, size, cNum * 2);
    node->Rc = treeCreateByArr(e, size, cNum * 2 + 1);
    return node;
}

int findElemIndex(ElemType *e, int inL, int intR, ElemType k) {
    for (int i = inL; i <= intR; i++) {
        if (e[i] == k) {
            return i;
        }
    }
    return -1;
}

/*
 TreePreOrder==> 1, 2, 4, |7,| 3, 5, 6
 TreeInOrder==>  4, 7, 2, |1,| 5, 3, 6
 */
T *treeCreateByPreAndIn(ElemType *pre, ElemType *in, int preL, int preR, int inL, int intR) {
    if (preL > preR || inL > intR) {
        return NULL;
    }
    BinaryTreeNode *n = malloc(sizeof(BinaryTreeNode));
    n->e = pre[preL];
    int mid = findElemIndex(in, inL, intR, pre[preL]);
    // left tree
    int lcSize = mid - inL;
    n->Lc = treeCreateByPreAndIn(pre, in, preL + 1, preL + lcSize, inL, mid - 1);
    // right tree
    n->Rc = treeCreateByPreAndIn(pre, in, preL + lcSize + 1, preR, mid + 1, intR);
    return n;
}

// TreeCreateByPreAndIn 通过前序和中序建立二叉树
T *TreeCreateByPreAndIn(ElemType *pre, ElemType *in, int size) {
    return treeCreateByPreAndIn(pre, in, 0, size - 1, 0, size - 1);
}


// TreeCreateByArr 通过其顺序储存建立反向建立
T *TreeCreateByArr(ElemType *e, int size) {
    return treeCreateByArr(e, size, 1);
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

// !!!
bool TreePostOrder(T *t, L *l) {
    if (!t || !l) {
        return false;
    }
    TreePostOrder(t->Lc, l);
    TreePostOrder(t->Rc, l);
    ListInsert(l, t->e, ListLength(l) + 1);
}

void treeInThread(T *pre, T *p) {
    if (!p) {
        return;
    }
    // to left
    treeInThread(pre, p->Lc); // !!! not treeInThread(p, p->Lc);
    // visit
    if (!p->Lc) {
        p->LTag = 1;
        p->Lc = pre;
    }
    if (pre && !pre->Rc) {
        pre->RTag = 1;
        pre->Rc = p;
    }
    // to right
    treeInThread(p, p->Rc);
}

// todo
void TreeInThread(T *t) {
    treeInThread(t, NULL);
}


bool TreePreOrderByStack(T *t, S *s, L *l) {
    BinaryTreeNode *cn = t;
    while (cn || !StackEmpty(s)) {
        if (cn) {
            ListInsert(l, cn->e, ListLength(l) + 1);
            StackPush(s, (ElemType) cn);
            cn = cn->Lc;
        } else {
            StackPop(s, &cn);
            cn = cn->Rc;
        }
    }
    return true;
}

bool TreeInOrderByStack(T *t, S *s, L *l) {
    BinaryTreeNode *cn = t;
    while (cn || !StackEmpty(s)) {
        if (cn) {
            StackPush(s, (ElemType) cn);
            cn = cn->Lc;
        } else {
            StackPop(s, &cn);
            ListInsert(l, cn->e, ListLength(l) + 1);
            cn = cn->Rc;
        }
    }
    return true;
}

// todo
bool TreePostOrderByStack(T *t, S *s, L *l) {
    return false;
}

bool TreeLevelOrder(T *t, Q *q, L *l) {
    T *tmp;
    EnQueue(q, (ElemType) t);
    while (!QueueEmpty(q)) {
        DeQueue(q, &tmp);
        if (tmp) {
            if (tmp->Lc) {
                EnQueue(q, (ElemType) tmp->Lc);
            }
            if (tmp->Rc) {
                EnQueue(q, (ElemType) tmp->Rc);
            }
        }
        ListInsert(l, tmp->e, ListLength(l) + 1);
    }
    return true;
}

void printTree(T *n, int type, int level) {
    int i;

    if (NULL == n)
        return;

    printTree(n->Rc, 2, level + 1);
    switch (type) {
        case 0:
            printf("%2d\n", n->e);
            break;
        case 1:
            for (i = 0; i < level; i++)
                printf("\t");
            printf("\\ %2d\n", n->e);
            break;
        case 2:
            for (i = 0; i < level; i++)
                printf("\t");
            printf("/ %2d\n", n->e);
            break;
    }
    printTree(n->Lc, 1, level + 1);
}

void TreePrint(T *t) {
    printTree(t, 0, 0);
}

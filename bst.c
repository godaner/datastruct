#include <bst.h>
#include <stdio.h>
#include <malloc.h>

//
// Created by godaner on 2021/7/16.
//
BST *BSTInsert(BST *t, ElemType e) {
    if (t == NULL) {
        BSTNode *n = malloc(sizeof(BST));
        n->Rc = n->Lc = NULL;
        n->e = e;
        return n;
    }
    if (e > t->e) {
        t->Rc = BSTInsert(t->Rc, e);
    }
    if (e < t->e) {
        t->Lc = BSTInsert(t->Lc, e);
    }
    return t;
}

BST *BSTCreate(ElemType *e, int size) {
    T *t = NULL;
    for (int i = 0; i < size; ++i) {
        t = BSTInsert(t, e[i]);
    }
    return t;
}

T *BSTDelete(T *t, ElemType e) {
    if (t == NULL) {
        return NULL;
    }
    if (e == t->e) {
        // no child
        if (t->Lc == NULL && t->Rc == NULL) {
            free(t);
            return NULL;
        }
        // two child, 核心是找到一个节点值满足"左小右大"的定义即可 !!!
        // 找到左子树(全部小于当前节点t)中最大的节点，替换为t，然后在左子树中递归删除这个最大的值;
        // 或者
        // 找到右子树(全部大于当前节点t)中最小的节点，替换为t，然后在右子树中递归删除这个最小的值;
        if (t->Lc != NULL && t->Rc != NULL) {
            // 在左子树找最大值替换节点t
            ElemType lMax;
            BSTMax(t->Lc, &lMax);
            t->e = lMax;
            t->Lc = BSTDelete(t->Lc, lMax);
            return t;
        }
        // one child
        if (t->Lc != NULL) {
            BSTNode *n = t->Lc;
            free(t);
            return n;
        }
        if (t->Rc != NULL) {
            BSTNode *n = t->Rc;
            free(t);
            return n;
        }
        return t;
    }
    t->Rc = BSTDelete(t->Rc, e);
    t->Lc = BSTDelete(t->Lc, e);
    return t;
}


bool BSTMin(T *t, ElemType *e) {
    if (t == NULL) {
        return false;
    }
    BSTNode *c = t;
    *e = c->e;
    while (c->Lc) {
        *e = t->e;
        c = c->Lc;
    }
    return true;
}

bool BSTMax(T *t, ElemType *e) {
    if (t == NULL) {
        return false;
    }
    BSTNode *c = t;
    *e = c->e;
    while (c->Rc) {
        *e = t->e;
        c = c->Rc;
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

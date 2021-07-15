//
// Created by godaner on 2021/7/9.
//

#ifndef DATASTRUCT_BINARYTREE_H
#define DATASTRUCT_BINARYTREE_H

#include <u.h>
#include <stdio.h>
#include <linklist.h>
#include <lstack.h>
#include <lqueue.h>

typedef struct BinaryTreeNode {
    int LTag, RTag;
    struct BinaryTreeNode *Lc, *Rc;
    ElemType e;
} BinaryTreeNode, BinaryTree, T;

T *TreeCreateByArr(ElemType *e, int size);

T *TreeCreateByPreAndIn(ElemType *pre, ElemType *in, int size);

bool TreePreOrder(T *t, L *l);

bool TreeInOrder(T *t, L *l);

bool TreePostOrder(T *t, L *l);

bool TreePreOrderByStack(T *t, S *s, L *l);

bool TreeInOrderByStack(T *t, S *s, L *l);

bool TreePostOrderByStack(T *t, S *s, L *l);

void TreeInThread(T *t);

bool TreeLevelOrder(T *t, Q *q, L *l);

void TreePrint(T *t);

#endif //DATASTRUCT_BINARYTREE_H

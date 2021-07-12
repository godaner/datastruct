//
// Created by godaner on 2021/7/9.
//

#ifndef DATASTRUCT_BINARYTREE_H
#define DATASTRUCT_BINARYTREE_H

#include <u.h>
#include <stdio.h>
#include <linklist.h>

typedef struct BinaryTreeNode {
    struct BinaryTreeNode *Lc, *Rc;
    ElemType e;
} BinaryTreeNode, BinaryTree, T;

T *TreeCreate(ElemType *e, int size);

bool TreePreOrder(T *t, L *l);

bool TreeInOrder(T *t, L *l);

bool TreePostOrder(T *t, L *l);

#endif //DATASTRUCT_BINARYTREE_H

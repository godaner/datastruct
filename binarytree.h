//
// Created by godaner on 2021/7/9.
//

#ifndef DATASTRUCT_BINARYTREE_H
#define DATASTRUCT_BINARYTREE_H

#include <u.h>
#include <stdio.h>
#include <.h>

typedef struct BinaryTreeNode {
    struct BinaryTreeNode *Lc, *Rc;
    ElemType e;
} BinaryTreeNode, BinaryTree, T;

T *CreateTree(ElemType *e, int size);

void PreOrder(T *t);

void InOrder(T *t);

void PostOrder(T *t);

#endif //DATASTRUCT_BINARYTREE_H

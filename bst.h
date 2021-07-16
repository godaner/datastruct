//
// Created by godaner on 2021/7/15.
//

#ifndef DATASTRUCT_BST_H
#define DATASTRUCT_BST_H

#include <u.h>

typedef struct BSTNode {
    struct BSTNode *Lc, *Rc;
    ElemType e;
} BSTNode, BST, T;

BST *BSTInsert(BST *t, ElemType e);

void TreePrint(T *t);

T *BSTCreate(ElemType *e, int size);

T *BSTDelete(T *t, ElemType e);

bool BSTMin(T *t, ElemType *e);

bool BSTMax(T *t, ElemType *e);

#endif //DATASTRUCT_BST_H

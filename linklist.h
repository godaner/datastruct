//
// Created by godaner on 2021/7/12.
//

#ifndef DATASTRUCT_LINKLIST_H
#define DATASTRUCT_LINKLIST_H

#include <stdio.h>
#include <malloc.h>
#include <u.h>

typedef struct LNode {
    ElemType elem;
    struct LNode *next;
} LNode, L;

int ListPrint(L *l, char *prefix);

int ListHeadInsert(L *l, const int arr[], int size);

int ListTailInsert(L *l, const int arr[], int size);

// Insert 注意，可能插入到第一个
int ListInsert(L *l, ElemType e, int i);

int ListDelete(L *l, int i);

LNode *ListFindByElem(L *l, ElemType e);

// 等于0返回头节点
LNode *ListFindByIndex(L *l, int i);

int ListLength(L *l);

L *ListCreate();

#endif //DATASTRUCT_LINKLIST_H

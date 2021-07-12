#include <stdio.h>
#include <u.h>
#include <linklist.h>


int main() {
    int arr[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    L *l = ListCreate();
    // HeadInsert
    ListHeadInsert(l, arr, sizeof(arr) / sizeof(arr[0]));
    ListPrint(l, "HeadInsert");

    // TailInsert
    ListTailInsert(l, arr, sizeof(arr) / sizeof(arr[0]));
    ListPrint(l, "TailInsert");

    // FindByIndex
    LNode *n = ListFindByIndex(l, 3);
    printf("FindByIndex is: %d\n", n->elem);
    ListPrint(l, "FindByIndex");

    // FindByElem
    n = ListFindByElem(l, 0);
    printf("FindByElem is: %d\n", n->elem);
    ListPrint(l, "FindByElem");


    // Insert
    ElemType e = 100;
    ListInsert(l, e, 21);
    ListInsert(l, e, 1);
    ListPrint(l, "Insert");

    // Delete
    ListDelete(l, 1);
    ListDelete(l, 21);
    ListDelete(l, 21);
    ListDelete(l, 0);
    ListPrint(l, "Delete");


    // Length
    int len = ListLength(l);
    printf("Length is: %d\n", len);
    ListPrint(l, "Length");

    return 0;
}
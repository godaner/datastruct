#include <stdio.h>
#include <u.h>
#include <linklist.c>


int main() {
    int arr[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    L *l = Create();
    // HeadInsert
    HeadInsert(l, arr, sizeof(arr) / sizeof(arr[0]));
    Print(l, "HeadInsert");

    // TailInsert
    TailInsert(l, arr, sizeof(arr) / sizeof(arr[0]));
    Print(l, "TailInsert");

    // FindByIndex
    LNode *n = FindByIndex(l, 3);
    printf("FindByIndex is: %d\n", n->elem);
    Print(l, "FindByIndex");

    // FindByElem
    n = FindByElem(l, 0);
    printf("FindByElem is: %d\n", n->elem);
    Print(l, "FindByElem");


    // Insert
    ElemType e = 100;
    Insert(l, e, 21);
    Insert(l, e, 1);
    Print(l, "Insert");

    // Delete
    Delete(l, 1);
    Delete(l, 21);
    Delete(l, 21);
    Delete(l, 0);
    Print(l, "Delete");


    // Length
    int len = Length(l);
    printf("Length is: %d\n", len);
    Print(l, "Length");

    return 0;
}
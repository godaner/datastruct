#include <stdio.h>
#include <u.h>
#include <dlinklist.c>


int main() {
    L *l = Create();

    // Insert
    ElemType e = 0;
    Insert(l, e, 21);
    e = 1;
    Insert(l, e, 1);
    e = 2;
    Insert(l, e, 1);
    e = 33;
    Insert(l, e, 1);
    e = 41;
    Insert(l, e, 1);
    e = 2;
    Insert(l, e, 2);
    Print(l, "Insert");

    // FindByIndex
    DLNode *n = FindByIndex(l, 3);
    printf("FindByIndex is: %d\n", n->elem);
    Print(l, "FindByIndex");

    // FindByElem
    n = FindByElem(l, 0);
    printf("FindByElem is: %d\n", n->elem);
    Print(l, "FindByElem");

    // Delete
    Delete(l, 1);
    Delete(l, 21);
    Delete(l, 21);
    Delete(l, 0);
    Delete(l, 4);
    Delete(l, 4);
    Print(l, "Delete");

    // Length
    int len = Length(l);
    printf("Length is: %d\n", len);
    Print(l, "Length");

    return 0;
}
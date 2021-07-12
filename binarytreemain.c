#include <binarytree.h>

/*
     1
    / \
   2   3
  /   / \
 4   5  6
  \
   7

 */
int main() {
    // TreeCreate
    int es[] = {1, 2, 3, 4, 0, 5, 6, 0, 7};
    T *t = TreeCreate(es, sizeof(es) / sizeof(es[0]));
    L *l = ListCreate();

    // PreOrder
    TreePreOrder(t, l);
    ListPrint(l, "TreePreOrder");


    // TreeInOrder
    l = ListCreate();
    TreeInOrder(t, l);
    ListPrint(l, "TreeInOrder");


    // TreePostOrder
    l = ListCreate();
    TreePostOrder(t, l);
    ListPrint(l, "TreePostOrder");
    

    return 0;
}
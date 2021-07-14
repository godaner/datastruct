#include <binarytree.h>

/*
     1
    / \
   2   3
  /   / \
 4   5  6
  \
   7
TreePreOrder==> 1, 2, 4, 7, 3, 5, 6
TreeInOrder==>  4, 7, 2, 1, 5, 3, 6
 */
int main() {
    // TreeCreate
    int es[] = {1, 2, 3, 4, 0, 5, 6, 0, 7};
    T *t = TreeCreateByArr(es, sizeof(es) / sizeof(es[0]));
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

    S s;


    // TreePreOrderByStack
    l = ListCreate();
    StackInit(&s);
    TreePreOrderByStack(t, &s, l);
    ListPrint(l, "TreePreOrderByStack");

    // TreeInOrderByStack
    l = ListCreate();
    StackInit(&s);
    TreeInOrderByStack(t, &s, l);
    ListPrint(l, "TreeInOrderByStack");

    Q q;
    // TreeLevelOrder
    l = ListCreate();
    QueueInit(&q);
    TreeLevelOrder(t, &q, l);
    ListPrint(l, "TreeLevelOrder");


    // TreeLevelOrder
    int pre[] = {1, 2, 4, 7, 3, 5, 6};
    int in[] = {4, 7, 2, 1, 5, 3, 6};
    t = TreeCreateByPreAndIn(pre, in, 7);

    // TreePrint
    TreePrint(t);
    return 0;
}
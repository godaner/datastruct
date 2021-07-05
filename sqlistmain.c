#include <stdio.h>
#include <sqlist.c>
#include <u.h>

int main() {
    L l;
    ElemType e = 1;

    int res = Init(&l);
    printf("%d\n", res);

    int len = Length(&l);
    printf("Length: %d\n", len);

    res = Add(&l, &e, 1);
    printf("Add: %d\n", res);

    len = Length(&l);
    printf("Length: %d\n", len);

    // DeleteMin
    e = 10;
    Add(&l, &e, 1);
    e = 55;
    Add(&l, &e, 1);
    e = 5456;
    Add(&l, &e, 1);
    Print(&l, "Add");
    ElemType minE = 0;
    DeleteMin(&l, &minE);
    printf("min is: %d,len: %d\n", minE, Length(&l));
    Print(&l, "DeleteMin");

    // Reverse
    e = 999;
    Add(&l, &e, 1);
    Print(&l, "Reverse");
    Reverse(&l);
    Print(&l, "Reverse");

    // DeleteX
    e = 5;
    Add(&l, &e, 1);
    Add(&l, &e, Length(&l) / 2);
    Add(&l, &e, Length(&l));
    Print(&l, "DeleteX");
    DeleteX(&l, &e);
    Print(&l, "DeleteX");



    // DeleteST
    ElemType s = 999;
    ElemType t = 5456;
    Print(&l, "DeleteST");
    DeleteST(&l, &s, &t);
    Print(&l, "DeleteST");


    // DeleteST
    e = 999;
    Add(&l, &e, 1);
    Add(&l, &e, Length(&l) / 2);
    e = 111;
    Add(&l, &e, 1);
    Add(&l, &e, Length(&l) / 2);
//    Print(&l, "DeleteX");
//    DeleteST(&l, &s, &t);
    SelectSort(&l);
//    BubbleSort(&l);
    Print(&l, "SelectSort");

    // DeleteSortST
    s = 111;
    t = 111;
    Print(&l, "DeleteSortST");
    DeleteSortST(&l, &s, &t);
    Print(&l, "DeleteSortST");

    // DeleteSortRepeat
    e = 111;
    Add(&l, &e, 1);
    Add(&l, &e, 1);
    Add(&l, &e, 1);
    e = 222;
    Add(&l, &e, 1);
    Add(&l, &e, 1);
    Add(&l, &e, 1);
    Print(&l, "DeleteSortRepeat");
    DeleteSortRepeat(&l);
    Print(&l, "DeleteSortRepeat");




    // MergeSortL1L2
    L l1, l2, l3;
    Init(&l1);
    Init(&l2);
    Init(&l3);
    e = 22;
    Add(&l1, &e, 1);
    e = 231;
    Add(&l1, &e, 1);
    e = 11;
    Add(&l1, &e, 1);
    SelectSort(&l1);
    Print(&l1, "MergeSortL1L2 l1");
    e = 222;
    Add(&l2, &e, 1);
    e = 1;
    Add(&l2, &e, 1);
    SelectSort(&l2);
    Print(&l2, "MergeSortL1L2 l2");
    MergeSortL1L2(&l1, &l2, &l3);
    Print(&l3, "MergeSortL1L2 l3");

    // MergeSortL1L2
//    int arr[] = {1, 2, 3, 4, 5, 6, 7};
//    ReverseArray(arr, 2, 4, 5);
//    for (int i = 0; i < 7; ++i) { // 1
//        printf("%d ", arr[i]);
//    }
    return 0;
}
//
// Created by godaner on 2021/7/16.
//
#include <bst.h>
#include <stdio.h>

int main() {
    //BSTCreate
    int arr[] = {20, 40, 54, 66, 79, 36};
    BST *t = BSTCreate(arr, sizeof(arr) / sizeof(arr[0]));
    TreePrint(t);

    // BSTInsert
    int arr2[] = {28, 58, 59, 57};
    for (int i = 0; i < sizeof(arr2) / sizeof(arr2[0]); ++i) {
        t = BSTInsert(t, arr2[i]);
    }
    TreePrint(t);

    // BSTDelete
    t = BSTDelete(t, 66);
    TreePrint(t);

    return 0;
}
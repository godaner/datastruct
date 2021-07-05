#include <malloc.h>
#include <stdio.h>
#include <u.h>

#define MAXSIZE  100
typedef struct SeqList {
    ElemType *elem;
    int len;
} L;


int Init(L *l) {
    l->len = 0;
    l->elem = (ElemType *) malloc(sizeof(ElemType) * MAXSIZE);
    if (!l->elem) {
        return 0;
    }
    return 1;
}

int Length(L *l) {
    return l->len;
}

int Print(L *l, char *prefix) {
    printf("%s==>\t", prefix);
    for (int i = 0; i < l->len; i++) {
        printf("%d, ", l->elem[i]);
    }
    printf("==>\tlen is: %d\n", l->len);
    return 1;
}

int Add(L *l, const ElemType *e, int i) {
    if (l->len >= MAXSIZE) {
        return 0;
    }
    if (i < 1 || i > l->len + 1) {
        return 0;
    }
    for (int j = l->len; j >= i; j--) {
        l->elem[j] = l->elem[j - 1];
    }
    l->elem[i - 1] = *e;
    l->len++;
    return 1;
}

// DeleteX
// 反向思维，删除x? 就是把除x之外的数据挑选保存下来
int DeleteX(L *l, const ElemType *x) {
    int k = 0;
    for (int i = 0; i < l->len; i++) {
        if (l->elem[i] != *x) {
            l->elem[k++] = l->elem[i];
        }
    }
    l->len = k;
    return 1;
}

int DeleteST(L *l, const ElemType *s, const ElemType *t) {
    if (l->len < 1 || *s > *t) {
        return 0;
    }
    int k = 0;
    for (int i = 0; i < l->len; ++i) {
        if (!(l->elem[i] >= *s && l->elem[i] <= *t)) {
            l->elem[k++] = l->elem[i];
        }
    }
    l->len = k;
    return 1;
}

// 核心同 DeleteX
int DeleteSortRepeat(L *l) {
    if (l->len < 1) {
        return 0;
    }
    if (l->len == 1) {
        return 1;
    }
    int k = 0;
    for (int i = 1; i < l->len; i++) {
        if (l->elem[i] != l->elem[k]) {
            l->elem[++k] = l->elem[i];
        }
    }
    l->len = ++k;
    return 1;
}

int MergeSortL1L2(L *l1, L *l2, L *l3) {
    if (l1->len + l2->len > MAXSIZE) {
        return 0;
    }
    if (l1->len == 0 && l2->len == 0) {
        return 1;
    }
    if (l1->len == 0) {
        return 1;
    }
    if (l2->len == 0) {
        return 1;
    }
    int k = 0, i = 0, j = 0;
    for (; i < l1->len && j < l2->len;) {
        if (l1->elem[i] < l2->elem[j]) {
            l3->elem[k++] = l1->elem[i++];
        } else {
            l3->elem[k++] = l2->elem[j++];
        }
    }
    for (; i < l1->len;) {
        l3->elem[k++] = l1->elem[i++];
    }
    for (; j < l2->len;) {
        l3->elem[k++] = l2->elem[j++];
    }
    l3->len = k;
    return 1;
}

int DeleteSortST(L *l, const ElemType *s, const ElemType *t) {
    if (l->len < 1 || *s > *t) {
        return 0;
    }
    int k = 0;
    for (int i = 0; i < l->len; i++) {
        if (!(l->elem[i] >= *s && l->elem[i] <= *t)) {
            l->elem[k++] = l->elem[i];
        }
    }
    l->len = k;
    return 1;
}

int Reverse(L *l) {
    if (l->len <= 0) {
        return 0;
    }
    ElemType temp;
    for (int i = 0; i <= (l->len - 1) / 2; ++i) {
        temp = l->elem[i];
        l->elem[i] = l->elem[l->len - 1 - i];
        l->elem[l->len - 1 - i] = temp;

    }
    return 1;
}

int DeleteMin(L *l, ElemType *e) {
    if (l->len <= 0) {
        return 0;
    }
    ElemType min = l->elem[0];
    int minP = 0;
    for (int i = 1; i < l->len; i++) {
        if (l->elem[i] < min) {
            min = l->elem[i];
            minP = i;
        }
    }
    *e = min;
    l->elem[minP] = l->elem[l->len - 1];
    l->len--;
    return 1;
}


void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void SelectSort(L *l) {
    int min;
    for (int i = 0; i < l->len - 1; ++i) {
        min = i;
        for (int j = i + 1; j < l->len; ++j) {
            if (l->elem[min] > l->elem[j]) {
                min = j;
            }
        }
        if (i != min) {
            swap(&l->elem[i], &l->elem[min]);
        }
    }
}

void BubbleSort(L *l) {
    for (int i = 0; i < l->len - 1; i++) {//排序的趟数（例如5个数据需要比较4趟）
        for (int j = 0; j < l->len - 1 - i; j++) {//每一趟比较中的比较次数（例如5个数据在第0趟需要比较4次）
            if (l->elem[j] > l->elem[j + 1]) {
                ElemType temp = l->elem[j];
                l->elem[j] = l->elem[j + 1];
                l->elem[j + 1] = temp;
            }
        }
    }
}

// 1 2 3 4 5 6 7
// 2,4,5
//int ReverseArray(int arr[], int left, int right, int size) {
//    if (size == 0) {
//        return 0;
//    }
//    int tail = size + left - 1; // !!!
//    for (int i = 0; i < size / 2; ++i) {
//        swap(&arr[i + left - 1], &arr[tail - 1 - i]);
//    }
//    int last = size - right + 1;
//    for (int i = 0; i < (last) / 2; i++) {
//        swap(&arr[i], &arr[last - 1 - i]);
//    }
//    int s = last;
//    last = size - last;
//    for (int i = s; i < (last) / 2; i++) {
//        swap(&arr[i], &arr[last - 1 - i]);
//    }
//    return 1;
//}

#include <malloc.h>
#include <stdio.h>

#define MAXSIZE  100
typedef int ElemType;
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

int Print(L *l) {
    printf("Print: ");
    for (int i = 0; i < l->len; i++) {
        printf("%d ", l->elem[i]);
    }
    printf(", len is: %d\n", l->len);
    return 1;
}

int Add(L *l, ElemType *e, int i) {
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
    Print(&l);
    ElemType minE = 0;
    DeleteMin(&l, &minE);
    printf("min is: %d,len: %d\n", minE, Length(&l));
    Print(&l);

    // Reverse
    e = 999;
    Add(&l, &e, 1);
    Print(&l);
    Reverse(&l);
    Print(&l);

    return 0;
}
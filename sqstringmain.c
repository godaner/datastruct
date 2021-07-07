#include <stdio.h>
#include <sqstring.c>

int main() {
    SqString s;
    // StrInit
    printf("===>StrInit\n");
    StrInit(&s);
    // StrEmpty
    printf("===>StrEmpty\n");
    printf("empty: %d, len: %d\n", StrEmpty(&s), StrLength(&s));
    // StrPrint
    printf("===>StrAssign\n");
    StrAssign(&s, "hejinshishabi");
    // StrPrint
    printf("===>StrPrint\n");
    StrPrint(&s);
    printf("empty: %d, len: %d\n", StrEmpty(&s), StrLength(&s));

    // StrCopy
    printf("===>StrCopy\n");
    SqString s1;
    StrInit(&s1);
    StrAssign(&s, "ccccccccccccccccccccccccccccccccccccccccc");
    StrCopy(&s1, &s);
    StrPrint(&s);
    StrPrint(&s1);

    // StrCompare
    StrAssign(&s, "abcd");
    StrAssign(&s1, "abcd");
    printf("===>StrCompare\n");
    printf("%d\n", StrCompare(&s, &s1));

    // StrContact
    StrAssign(&s, "aaaa");
    StrAssign(&s1, "cccc");
    printf("===>StrContact\n");
    S t;
    StrInit(&t);
    StrContact(&t, &s, &s1);
    StrPrint(&t);

    // StrViolenceIndex
    StrAssign(&s, "zhangke");
    StrAssign(&t, "hangke");
    printf("===>StrViolenceIndex\n");
    int index = StrViolenceIndex(&s, &t);
    printf("%d\n", index);

    // StrClear
    printf("===>StrClear\n");
    StrClear(&s);
    StrPrint(&s);
    printf("empty: %d, len: %d\n", StrEmpty(&s), StrLength(&s));

    // StrDestroy
    printf("===>StrDestroy\n");
    StrDestroy(&s);
    StrPrint(&s);
    return 0;
}


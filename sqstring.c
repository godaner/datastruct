#include <stdio.h>
#include <u.h>
#include <string.h>
#include <malloc.h>

typedef struct SqString {
    char *ch;
    int length;
} SqString, S, String;

bool StrInit(S *s) {
    s->ch = NULL;
    s->length = 0;
    return true;
}

int StrLength(S *s) {
    return s->length;
}

int StrEmpty(S *s) {
    return s->length <= 0;
}


bool StrPrint(S *s) {
    for (int i = 0; i < s->length; ++i) {
        printf("%c", s->ch[i]);
    }
    printf("\n");
    return true;
}

bool StrClear(S *s) {
    s->length = 0;
    if (!s->ch) {
        free(s->ch);
        s->ch = NULL;
    }
    return true;
}


bool StrAssign(S *s, char *ch) {
    if (!StrClear(s)) {
        return false;
    }
    int chL = strlen(ch);
    if (!chL) {
        return true;
    }
    s->ch = malloc(chL * sizeof(char));
    s->length = chL;
    for (int i = 0; i < chL; ++i) {
        s->ch[i] = ch[i];
    }
    return true;
}

bool StrDestroy(S *s) {
    if (!s) {
        return true;
    }
    if (!StrClear(s)) {
        return false;
    }
    free(s);
    s = NULL;
    return true;
}


int StrCompare(S *s, S *s1) {
    int i = 0, j = 0;
    for (; i < StrLength(s) && j < StrLength(s1); ++i, ++j) {
        if (s->ch[i] == s->ch[j]) {
            continue;
        }
        return s->ch[i] > s->ch[j] ? 1 : -1;
    }
    if (i < StrLength(s)) {
        return 1;
    }
    if (j < StrLength(s1)) {
        return -1;
    }
    return 0;
}

bool StrCopy(S *t, S *s) {
    if (!StrClear(s)) {
        return false;
    }
    int sLen = StrLength(s);
    if (sLen <= 0) {
        return true;
    }
    t->ch = malloc(sizeof(char) * sLen);
    t->length = sLen;
    for (int i = 0; i < sLen; ++i) {
        t->ch[i] = s->ch[i];
    }
    return true;
}

bool StrViolenceIndex(S *s, S *t) {
    if (StrEmpty(t)) {
        return -1;
    }
    if (StrEmpty(s)) {
        return -1;
    }
    int i = 0, j = 0;
    for (; i < StrLength(s) && j < StrLength(t);) {
        if (s->ch[i] == t->ch[j]) {
            i++;
            j++;
            continue;
        }
        i = i - j + 1;
        j = 0;
    }
    if (j >= StrLength(t)) {
        return i - j;
    }
    return -1;
}

bool StrContact(S *t, S *s, S *s1) {
    int sLen = StrLength(s);
    int s1Len = StrLength(s1);
    if (!StrClear(t)) {
        return false;
    }
    if (sLen == 0 && s1Len == 0) {
        return true;
    }
    t->length = sLen + s1Len;
    t->ch = malloc(t->length * sizeof(char));
    int j = 0;
    for (int i = 0; i < s->length; ++i) {
        t->ch[j++] = s->ch[i];
    }
    for (int i = 0; i < s1->length; ++i) {
        t->ch[j++] = s1->ch[i];
    }
    return true;
}

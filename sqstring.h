
#ifndef DATASTRUCT_SQSTRING_H
#define DATASTRUCT_SQSTRING_H

#include <u.h>

typedef struct SqString {
    char *ch;
    int length;
} SqString, S, String;

bool StrInit(S *s);

int StrLength(S *s);

int StrEmpty(S *s);

bool StrPrint(S *s);

bool StrClear(S *s);

bool StrAssign(S *s, char *ch);

bool StrDestroy(S *s);

int StrCompare(S *s, S *s1);

bool StrCopy(S *t, S *s);

bool StrViolenceIndex(S *s, S *t);

bool StrContact(S *t, S *s, S *s1);


#endif //DATASTRUCT_SQSTRING_H

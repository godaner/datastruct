#include <u.h>
#include <lstack.c>

bool ValidateBracket(S *s, const char *bk, int size) {
    ElemType pe = 0;
    for (int i = 0; i < size; i++) {
        if (bk[i] == '{' || bk[i] == '(' || bk[i] == '[') {
            Push(s, bk[i]);
            continue;
        }
        if (bk[i] == '}' || bk[i] == ')' || bk[i] == ']') {
            bool suc = Pop(s, &pe);
            if (!suc) {
                return false;
            }
            if (bk[i] == '}' && pe != '{') {
                return false;
            }
            if (bk[i] == ']' && pe != '[') {
                return false;
            }

            if (bk[i] == ')' && pe != '(') {
                return false;
            }
            continue;
        }

    }
    return StackEmpty(s);
}

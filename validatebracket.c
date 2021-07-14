#include <u.h>
#include <lstack.h>
#include <string.h>

bool ValidateBracket(S *s, const char *bk) {
    ElemType pe = 0;
    for (int i = 0; i < strlen(bk); i++) {
        if (bk[i] == '{' || bk[i] == '(' || bk[i] == '[') {
            StackPush(s, bk[i]);
            continue;
        }
        if (bk[i] == '}' || bk[i] == ')' || bk[i] == ']') {
            bool suc = StackPop(s, &pe);
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

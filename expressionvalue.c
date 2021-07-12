#include <u.h>
#include <lstack.h>
#include <string.h>

bool ExpressionValue(S *s, char *expression, int *r) {
    ElemType opa, opb;
    char e;
    for (int i = 0; i < strlen(expression); ++i) {
        e = expression[i];
        if (e >= '0' && e <= '9') {
            Push(s, e - 48);
            continue;
        }
        if (!(e == '+' || e == '-' || e == '*' || e == '/' || e == '%')) {
            return false;
        }
        if (!Pop(s, &opb)) {
            return false;
        }
        if (!Pop(s, &opa)) {
            return false;
        }
        if (e == '+') {
            Push(s, opa + opb);
        }
        if (e == '-') {
            Push(s, opa - opb);
        }
        if (e == '*') {
            Push(s, opa * opb);
        }
        if (e == '/') {
            Push(s, opa / opb);
        }
        if (e == '%') {
            Push(s, opa % opb);
        }
    }
    return Pop(s, r);
}


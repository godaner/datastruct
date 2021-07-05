#include <stdio.h>
#include <expressionvalue.c>
#include <string.h>

int main() {
    S s;
    Init(&s);
    int r = 0;
    char *exp = "1234-*+56/-";
    bool suc = ExpressionValue(&s, exp, &r);
    int r1 = 1 + 2 * (3 - 4) - 5 / 6;
    printf("suc: %d, r: %d, r1: %d, eq: %d\n", suc, r, r1, r1 == r);
    return 0;
}


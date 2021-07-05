#include <stdio.h>
#include <u.h>
#include <lstack.c>

bool ValidateBracket(char *bk) {

    return false;
}

int main() {
    S s;
    char cs[] = "{({}[[][]]{})}";
    bool r = ValidateBracket(cs);
    printf("%d\n", r);
    return 0;
}
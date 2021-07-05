#include <stdio.h>
#include <u.h>
#include <validatebracket.c>


int main() {
    S s;
    Init(&s);
    char cs[] = "{({}[[][]]{})}";
    bool r = ValidateBracket(&s, cs, sizeof(cs) / sizeof(cs[0]));
    printf("%d\n", r);
    return 0;
}
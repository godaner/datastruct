#include <stdio.h>
#include <u.h>
#include <validatebracket.c>


int main() {
    S s;
    StackInit(&s);
    char *cs = "{({}[[][]]{})}";
    bool r = ValidateBracket(&s, cs);
    printf("%d\n", r);
    return 0;
}
#include "../6.h"

int main() {
    char *s;
    s = (char *) malloc(100);
    strcpy(s, "hello world!");
    printf("s = %s\n", s);
    return 0;
}

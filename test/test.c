#include <stdio.h>
#include <string.h>

#include "xmemtools.h"

void success(const char *msg) {
    
    printf("SUCCESS: %s\n", msg);

}

void failed() {
    puts("FAILED");
    exit(1);
}

int main() {

    void *tmp = xmalloc(4 * Kib);
    xfree(tmp);
    
    tmp = xcalloc(10, 10);
    tmp = xrealloc(tmp, 50);

    
    void *t = xmemdup(tmp, 50);

    xfree(tmp);
    xfree(t);

    char *a = "HEllo";
    char *b = "Hello World";
    char *c = xstrdiff(a, b);
    if (strcmp(c, "Ello") == 0 && c - a == 1) {
        success("Passed strcmp");
    }

#ifdef __SIZEOF_INT128__
    uint128_t bigint = 1;
    printf("%lu\n", sizeof(bigint));

#endif
    return 0;
}

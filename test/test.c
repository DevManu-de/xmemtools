#include <stdio.h>
#include <string.h>

#include "xmemtools.h"

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
        return 0;
    }
    puts("FAILED");
    return 1;
}

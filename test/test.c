#include <stdio.h>

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
    char *c = xstrdiff (a, b);

    return 0;

}

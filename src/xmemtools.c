#include "xmemtools.h"

#include <assert.h>
#include <stdlib.h>
#include <string.h>

void *xmalloc(size_t bytes) {

	void *temp = malloc(bytes);
	assert(temp != NULL);
	return (temp);
}

void *xcalloc(size_t nelem, size_t bytes) {

	void *temp = calloc(nelem, bytes);
	assert(temp != NULL);
	return (temp);
}

void *xrealloc(void *pntr, size_t bytes) {

	void *temp = realloc(pntr, bytes);
	assert(temp != NULL);
	return (temp);
}

void xfree(void *pntr) {

	free(pntr);
}

void *xmemdup(void *pntr, size_t bytes) {
    
    void *temp = xmalloc(bytes);
    assert(temp != NULL);
    return memmove(temp, pntr, bytes);

}

char *xstrdiff(char *s1, char *s2) {

    for (;*s1 == *s2; ++s1, ++s2)
        if (*s1 == '\0')
            return s1;
    
    return s1;

}

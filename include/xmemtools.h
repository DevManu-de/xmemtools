#ifndef _XMALLOC_H
#define _XMALLOC_H

#include <stdlib.h>

#define Kib 1024
#define Mib 1048576
#define Gib 1073742000

void *xmalloc(size_t bytes);
void *xcalloc(size_t nelem, size_t bytes);
void *xrealloc(void *pntr, size_t bytes);
void xfree(void *pntr);

void *xmemdup(void *pntr, size_t bytes);
char *xstrdiff(char *s1, char *s2);

#endif


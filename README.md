# xmemtools
xmemtools provides safer alternatives to memory functions like `malloc`

## Description

### xmalloc
    allocates a block of memory and ruturns a pointer to it.

### xcalloc
    allocates a block of memory and sets it to 0 and returns a pointer to it.

### xrealloc
    reallocates a allocated block and returns a pointer to it.

### xfree
    frees an allocated block of memory.

### xmemdup
    douplicates a block of memory and returns a pointer to the allocated block.

All functions `assert` if allocation failed.

## Usage

All functions behave like their `stdlib.h` functions just that these add some safety.

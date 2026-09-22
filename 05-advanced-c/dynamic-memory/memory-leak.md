# Memory Leak

A memory leak happens when a program allocates memory but forgets to release it.

Example:

```c
int *data = malloc(sizeof(int));

// use data

free(data);
```

## Stack vs Heap

Stack:
- Automatic memory management
- Local variables

Heap:
- Manual memory management
- malloc() and free()

Good practice:

1. Allocate memory
2. Check allocation result
3. Use memory
4. Release memory with free()

# Memory Layout in C

Understanding memory is one of the most important parts of C programming.

## Basic memory model

```
RAM

+----------------+
| Stack          |
| local variables|
+----------------+

+----------------+
| Heap           |
| malloc memory  |
+----------------+

+----------------+
| Global/Data    |
+----------------+

+----------------+
| Code/Text      |
+----------------+
```

## Pointer concept

A pointer stores an address, not the actual value.

Example:

```c
int x = 10;
int *ptr = &x;
```

Memory:

```
Address 0x1000
+------+
|  10  |  <- x
+------+

ptr stores: 0x1000
```

`*ptr` means access the value located at that address.

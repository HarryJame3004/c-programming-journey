# Header Files in C

## Why use header files?

Large programs are separated into multiple files to keep code organized.

Example:

```
project/
|
|-- main.c
|-- math.c
|-- math.h
```

## Compile process

```
source code (.c)
        |
        v
compiler
        |
        v
object files (.o)
        |
        v
linker
        |
        v
executable program
```

Header files contain declarations that tell the compiler about functions and types.

# Valgrind Analysis

## heap_example.c

### Issue: Memory Leak

Valgrind:
definitely lost

Cause:
Heap allocation without corresponding free.

Violation:
Ownership lost → memory leak

---

## aliasing_example.c

### Issue: Use-after-free

Valgrind:
Invalid read

Cause:
Accessing memory after free.

Object:
Heap block A

Violation:
Lifetime ended but still accessed

---

## AI Mistake

AI claim:
"This is only a crash risk"

Correction:
Incorrect.
This is a specific memory error: use-after-free.

---

## Mapping

| Valgrind Output | Meaning						 |
| --------------- | ---------------------------- |
| definitely lost | memory leak					 |
| invalid read	  | use-after-free				 |
| invalid write   | buffer overflow / corruption |

---

## Conclusion

Valgrind errors directly reflect memory misuse:

* leaks → missing free
* invalid read → accessing freed memory


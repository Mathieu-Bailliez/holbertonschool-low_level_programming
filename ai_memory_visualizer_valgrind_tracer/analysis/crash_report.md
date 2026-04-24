# Crash Report

## crash_example.c

### Description

Program terminates with segmentation fault.

---

### Root Cause

Use-after-free on heap memory.

---

### Memory Sequence

1. Memory allocated (heap)
2. Memory freed
3. Pointer reused

---

### Error Type

Undefined behavior → use-after-free

---

### Why It Crashes

The program accesses a memory region that is no longer valid.

The operating system detects illegal access and raises a segmentation fault.

---

### Stack vs Heap

* Heap memory is involved (freed block)
* Stack contains pointer referencing invalid heap memory

---

### AI Evaluation

AI suggested:
"Null pointer dereference"

Correction:
Incorrect.

Pointer is not NULL → it is dangling.

---

### Conclusion

Crash is deterministic:
invalid access → OS protection → segmentation fault


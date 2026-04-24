# Memory Maps Analysis

## stack_example.c

### Execution model

At each function call, a new stack frame is created.

Example (recursive call n = 3):

Stack (top → bottom):

* frame(func, n=0)
* frame(func, n=1)
* frame(func, n=2)
* frame(func, n=3)
* frame(main)

Each frame contains:

* its own copy of local variables
* its own return address

Lifetime:
Stack frames are destroyed immediately after function return.

Key property:
Stack memory is not persistent beyond function scope.

---

## aliasing_example.c

### Step 1 — Allocation

Heap:

* Block A allocated

Pointers:

* p1 → A
* p2 → A

Aliasing:
p1 and p2 refer to the same memory region.

---

### Step 2 — Free

free(p1)

Heap:

* Block A is freed

Pointers:

* p1 → dangling
* p2 → dangling

Important:
Memory is freed, not the pointer.

---

### Step 3 — Access

Access via p2:

→ invalid read
→ use-after-free

---

## AI Mistake

AI claim:
"p2 remains valid because it was not freed"

Correction:
Incorrect.
Memory ownership is shared; freeing it invalidates all aliases.

---

## Key Concepts

* Stack memory: automatic lifetime, function-scoped
* Heap memory: manual lifetime
* Aliasing: multiple pointers → same memory
* Free invalidates all aliases


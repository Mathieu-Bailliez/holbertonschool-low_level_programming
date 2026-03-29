# Memory Analysis — stack_example.c

## 1. Overview

This program demonstrates recursive function calls and how stack frames are created and destroyed during execution.

No heap memory is used. All variables are stored on the stack.

---

## 2. Stack vs Heap

- Stack:
  - local variables (`marker`, `local_int`, `local_buf`, `p_local`)
  - function calls (`walk_stack`, `dump_frame`)

- Heap:
  - not used in this program

---

## 3. Recursive Behavior

The function `walk_stack(0, 3)` calls itself recursively:

- walk_stack(0, 3)
- walk_stack(1, 3)
- walk_stack(2, 3)
- walk_stack(3, 3)

Each call creates a new stack frame.

Each frame contains its own local variable `marker`.

Even though the variable name is the same, each instance is stored at a different memory address.

---

## 4. Stack Frames

Each function call creates a stack frame:

- `walk_stack` creates frames with `marker`
- `dump_frame` creates additional frames with:
  - `local_int`
  - `local_buf`
  - `p_local`

This increases the total depth of the stack during execution.

---

## 5. Execution Flow

- The stack grows as recursive calls are made
- When `depth == 3`, recursion stops
- The stack then unwinds:

  - walk_stack(3) returns → frame destroyed
  - walk_stack(2) resumes → then returns
  - walk_stack(1) resumes → then returns
  - walk_stack(0) resumes → then returns

All stack memory is automatically freed when functions return.

---

## 6. Pointer Behavior

In `dump_frame`:

- `p_local` points to `local_int`
- both are stored in the same stack frame

When the function returns:

- both variables are destroyed
- the pointer becomes invalid

If accessed after return, it would lead to a dangling pointer

---

## 7. Key Observations

- Each function call creates a new stack frame
- Local variables are unique per frame
- Stack memory is automatically managed
- No heap allocation is used

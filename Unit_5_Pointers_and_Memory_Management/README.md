# Unit 5 — Pointers and Memory Management

Examples cover pointer declaration, initialization, dereferencing, arithmetic, arrays, strings, structures and dynamic memory using `malloc()`, `calloc()`/`realloc()` and `free()`.

Always check allocation results for `NULL`. Release allocated memory exactly once. Set a pointer to `NULL` after freeing it when it will remain in scope; never dereference a freed pointer.

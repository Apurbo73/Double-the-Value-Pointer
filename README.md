# Double-the-Value-Pointer

Here's what happens:

* `int x;` declares an integer.
* `cin >> x;` takes input from the user and stores it in `x`.
* `int *ptr = &x;` creates a pointer `ptr` that stores the address of `x`.
* `*ptr = (*ptr) * 2;` accesses the value at the address (i.e., `x`) and doubles it.
* Finally, `cout << x;` prints the updated value.

So, if the user enters `5`, the output will be `10`. Let me know if you'd like this explained with a [memory diagram](f) or a [step-by-step walkthrough](f).

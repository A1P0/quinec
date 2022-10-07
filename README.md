# quinec
###### A simple quine in C.

A [quine](https://en.wikipedia.org/wiki/Quine_%28computing%29) is a program
that takes zero input and outputs it's own source code.

## Build & test

Wrote a simple `Makefile` to build and test it easily.
Just: 

```
make
```

And it will build `quine.c`, run the program (`quine`) while directing its
output to `test.c`, and then it will run `git diff` on the original and the
output. `git diff` will output nothing because there are no differences.

Also:

```
make clean
```

if you want to do it all over again.

That is all.

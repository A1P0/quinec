all: quine test

quine: quine.c
	cc quine.c -o quine

test: quine
	./quine > test.c
	git diff quine.c test.c

clean:
	rm -f quine test.c

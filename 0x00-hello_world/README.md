# gcc -E $CFILE -o c
* runs the c file through the preprocessor and saves the result into another file. This is still preprocessor stage.

# gcc -c $CFILE -o 1-main.o
* compiles the file and sets it's extension to ".o"

# gcc -S $CFILE -o 2-main.s
* assembles the c source code...

# gcc $CFILE -o cisfun
* compiles a file and houses result in a cisfun executable.

# Implemented this in the body of Task 4 code:
## puts("\"Programming is like building a multilingual puzzle");
* will print "Programming is like building a multilingual print exactly to the stdout with newline.



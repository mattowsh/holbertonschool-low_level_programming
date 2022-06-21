!#/bin/bash

# Transform .c extension for .o 
gcc -c *.c

# Create a static library called liball.a
ar rc liball.a *.o


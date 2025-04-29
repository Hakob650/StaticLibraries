First we create mathutils.h file,which contains our function's declarations to provide the compiler information about the functions.
Then we create .c files and write in them the implementations of our functions.
Then we compile them into object files:
  
  gcc -c factorial.c
  
  gcc -c fibbonaci.c
  
  gcc -c gcd.c
  
  gcc -c prime_check.c

Then we create a main.c file and call all our functions in it.

Then we make the archive file:

  ar rcs mylib.a factorial.o fibbonaci.o gcd.o prime_check.o

Then we compile our main.c file:
  
  gcc main.c mylib.a

We do this so the compiler knows where to find the actual implementations of the functions used in main.c.

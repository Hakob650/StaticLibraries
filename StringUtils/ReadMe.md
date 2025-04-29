First we create a stringutils.h file which contains our functions declarations to provide the compiler information about our functions.
Then we make .c files for each function and write in them the implementations of our functions.Then we compile them into object files:

      gcc -c ispal.c

      gcc -c c-v.c

      gcc -c rem_char.c

      gcc -c substr_c.c

Then we make the archive file:

      ar rcs archive.a ispal.o c-v.o rem_char.o substr_c.o

Then we compile the main and archive.a files together:

      gcc main1.c archive.a

We do this so the compiler knows where to find the actual implementations of functions used in main file.
    

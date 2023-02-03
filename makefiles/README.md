# C - Makefiles :scorpius:

<p align="center">
 <img src= "https://s3.eu-west-3.amazonaws.com/hbtn.intranet.project.files/holbertonschool-low_level_programming/273/giphy-2.gif">

## Description :face_in_clouds:

This project is about writing Makefiles.

## Helper Files :raised_hands:

* [school.c](./school.c): C function that displays a seahorse in text.
Used for Makefile practice purposes throughout project.

* [main.c](./main.c): Main C function that runs the function defined in
[school.c](./school.c).

## Header File :file_folder:

* [m.h](./m.h): Header file defining the function prototype used in `school.c`.

## Formatting and Examples :nerd_face:
<details open>
<summary> <strong> Usage :white_check_mark: </strong> </summary>

```
julien@ubuntu:~//Makefiles$ ls -1
0-Makefile
1-Makefile
2-Makefile
3-Makefile
school.c
main.c
main.c~
m.h
julien@ubuntu:~/Makefiles$ make -f 3-Makefile
gcc    -c -o main.o main.c
gcc    -c -o school.o school.c
gcc main.o school.o -o school
julien@ubuntu:~/Makefiles$ make all -f 3-Makefile
gcc main.o school.o -o school
julien@ubuntu:~/Makefiles$ ls -1
0-Makefile
1-Makefile
2-Makefile
3-Makefile
school
school.c
school.o
main.c
main.c~
main.o
m.h
julien@ubuntu:~/Makefiles$ make clean -f 3-Makefile 
rm -f *~ school
julien@ubuntu:~/Makefiles$ make oclean -f 3-Makefile 
rm -f main.o school.o
julien@ubuntu:~/Makefiles$ make fclean -f 3-Makefile 
rm -f *~ school
rm -f main.o school.o
julien@ubuntu:~/Makefiles$ make all -f 3-Makefile
gcc    -c -o main.o main.c
gcc    -c -o school.o school.c
gcc main.o school.o -o school
julien@ubuntu:~/Makefiles$ make all -f 3-Makefile
gcc main.o school.o -o school
julien@ubuntu:~/Makefiles$ make re -f 3-Makefile
rm -f main.o school.o
gcc    -c -o main.o main.c
gcc    -c -o school.o school.c
gcc main.o school.o -o school
julien@ubuntu:~/Makefiles$ 
```

</details>

## Tasks :page_with_curl:

* **0. make -f 0-Makefile**
  * [0-Makefile](./0-Makefile): Makefile that creates an executable `school` based on
  [school.c](./school.c) and [main.c](./main.c). Includes:
    * Rule `all` that builds the executable.

* **1. make -f 1-Makefile**
  * [1-Makefile](./1-Makefile): Makefile that creates an executable `school` based on
  [school.c](./school.c) and [main.c](./main.c). Builds on [0-Makefile](./0-Makefile)
  with:
    * Variable `CC` that defines the compiler to be used.
    * Variable `SRC` that defines the `.c` files to compile.
    * The `all` rule only recompiles updated source files.

* **2. make -f 2-Makefile**
  * [2-Makefile](./2-Makefile): Makefile that creates an executable `school` based on
  [school.c](./school.c) and [main.c](./main.c). Builds on [1-Makefile](./1-Makefile)
  with:
    * Variable `OBJ` that defines the `.o` files to compile.
    * Variable `NAME` that defines the name of the executable.

* **3. make -f 3-Makefile**
  * [3-Makefile](./3-Makefile): Makefile that creates an executable `school` based on
  [school.c](./school.c) and [main.c](./main.c). Builds on [2-Makefile](./2-Makefile)
  with:
    * Rule `clean` that deletes all Emacs/Vim temporary files as well as the
    executable.
    * Rule `oclean` that deletes the object files.
    * Rule `fclean` that deltes all of the temporary files, executable, and
    object files.
    * Rule `re` that forces recompilation of all source files.
    * Variable `RM` that defines the command to delete files.

* **4. A complete Makefile**
  * [4-Makefile](./4-Makefile): Makefile that creates an executable `school` based on
  [school.c](./school.c) and [main.c](./main.c). Builds on [3-Makefile](./3-Makefile)
  with:
    * Variable `CFLAGS` that defines the compiler flags `-Wall -Werror -Wextra
    -pedantic`.

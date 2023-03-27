# C - Static libraries

<p align="center">
 <img src= "https://miro.medium.com/v2/resize:fit:720/format:webp/1*LyFo-ncGtb_nSqHLms1m5Q.jpeg">

## Description :face_in_clouds:
This project is about static libraries are and practiced creating and
using them with `ar`, `ranlib`, and `nm`.

## Tests :heavy_check_mark:

* [tests](./tests): Folder of test files.
  
  
## Formatting and Examples :nerd_face:
<details open>
<summary> <strong> Compile's flags </strong> </summary>

```
-Wall -pedantic -Werror -Wextra -std=gnu89
```

</details>
<details open>
<summary> <strong> Example :zzz: </strong> </summary>

```
julien@ubuntu:~/Static Librairies$ ar -t libmy.a 
0-isupper.o
0-memset.o
0-strcat.o
1-isdigit.o
1-memcpy.o
1-strncat.o
100-atoi.o
2-strchr.o
2-strlen.o
2-strncpy.o
3-islower.o
3-puts.o
3-strcmp.o
3-strspn.o
4-isalpha.o
4-strpbrk.o
5-strstr.o
6-abs.o
9-strcpy.o
_putchar.o
julien@ubuntu:~/Static Librairies$ nm libmy.a 

0-isupper.o:
0000000000000000 T _isupper

0-memset.o:
0000000000000000 T _memset

0-strcat.o:
0000000000000000 T _strcat

1-isdigit.o:
0000000000000000 T _isdigit

1-memcpy.o:
0000000000000000 T _memcpy

1-strncat.o:
0000000000000000 T _strncat

100-atoi.o:
0000000000000000 T _atoi

2-strchr.o:
0000000000000000 T _strchr

2-strlen.o:
0000000000000000 T _strlen

2-strncpy.o:
0000000000000000 T _strncpy

3-islower.o:
0000000000000000 T _islower

3-puts.o:
                 U _putchar
0000000000000000 T _puts

3-strcmp.o:
0000000000000000 T _strcmp

3-strspn.o:
0000000000000000 T _strspn

4-isalpha.o:
0000000000000000 T _isalpha

4-strpbrk.o:
0000000000000000 T _strpbrk

5-strstr.o:
0000000000000000 T _strstr

6-abs.o:
0000000000000000 T _abs

9-strcpy.o:
0000000000000000 T _strcpy

_putchar.o:
0000000000000000 T _putchar
                 U write
```

</details>
<details open>
<summary> <strong> How to use it :dash: </strong> </summary>

If you want to prove the library you can run `gcc -std=gnu89 {C file with functions to provee} -L. -l{Library name} -o {output file}`
  
<strong>For example:</strong>
  
```
julien@ubuntu:~/Static Librairies$ cat main.c 
#include "main.h"

int main(void)
{
    _puts("\"At the end of the day, my goal was to be the best hacker\"\n\t- Kevin Mitnick");
    return (0);
}
julien@ubuntu:~/Static Librairies$ gcc -std=gnu89 main.c -L. -lmy -o quote
julien@ubuntu:~/Static Librairies$ ./quote 
"At the end of the day, my goal was to be the best hacker"
    - Kevin Mitnick
julien@ubuntu:~/Static Librairies$ 
```
  
Now if you want to create the all library, you need to run:
  `./create_static_lib.sh`
This will create the library call <strong>all</strong> that contains so much functions, if you want to see the functions of it's library you can run:
  `ar -t liball.a`
Now you can provee the library.
  
Then, if you want to delete the library, and the executables, you can run:
  `./clear.sh`
Now, you're ready.
  
</details>


## Tasks :page_with_curl:

* **0. A library is not a luxury but one of the necessities of life** :left_speech_bubble:
  * [libholberton.a](./libholberton.a): C Static library containing all the functions
  listed below:
    * `int _putchar(char c);`
    * `int _islower(int c);`
    * `int _isalpha(int c);`
    * `int _abs(int n);`
    * `int _isupper(int c);`
    * `int _isdigit(int c);`
    * `int _strlen(char *s);`
    * `void _puts(char *s);`
    * `char *_strcpy(char *dest, char *src);`
    * `int _atoi(char *s);`
    * `char *_strcat(char *dest, char *src);`
    * `char *_strncat(char *dest, char *src, int n);`
    * `char *_strncpy(char *dest, char *src, int n);`
    * `int _strcmp(char *s1, char *s2);`
    * `char *_memset(char *s, char b, unsigned int n);`
    * `char *_memcpy(char *dest, char *src, unsigned int n);`
    * `char *_strchr(char *s, char c);`
    * `unsigned int _strspn(char *s, char *accept);`
    * `char *_strpbrk(char *s, char *accept);`
    * `char *_strstr(char *haystack, char *needle);`

  * [holberton.h](./holberton.h): Header file containing the prototypes of all functions
  included in `libholberton.a`.

* **1. Without libraries what have we? We have no past and no future**
  * [create_static_lib.sh](./create_static_lib.sh): Bash script that creates a static
  library called `liball.a` from all the `.c` files in the current directory.

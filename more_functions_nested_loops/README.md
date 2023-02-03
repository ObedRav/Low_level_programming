# C - More functions, more nested loops :alien:

<p align="center">
 <img src= "https://cdn.programiz.com/sites/tutorial2program/files/function-c-programming.jpg">

## Description :face_in_clouds:

This project is about nested loops, header files, and variable scope
in C while practicing declaring and defining functions.

## Tests :heavy_check_mark:

* [tests](./tests): Folder of test files. Provided by Holberton School.

## Helper File :raised_hands:

* [_putchar.c](./_putchar.c): C function that writes a character to `stdout`.

## Header File :file_folder:

* [holberton.h](./holberton.h): Header file containing prototypes for all functions written in the project.

| File                     | Prototype                        |
| ------------------------ | -------------------------------- |
| `0-isupper.c`            | `int _isupper(int c);`           |
| `1-isdigit.c`            | `int _isdigit(int c);`           |
| `2-mul.c`                | `int mul(int a, int b);`         |
| `3-print_numbers.c`      | `void print_numbers(void);`      |
| `4-print_most_numbers.c` | `void print_most_numbers(void);` |
| `5-more_numbers.c`       | `void more_numbers(void);`       |
| `6-print_line.c`         | `void print_line(int n);`        |
| `7-print_diagonal.c`     | `void print_diagonal(int n);`    |
| `8-print_square.c`       | `void print_square(int size);`   |
| `10-print_triangle.c`    | `void print_triangle(int size);` |

## Formatting and Examples :nerd_face:
<details open>
<summary> <strong> Compile's flags </strong> </summary>

```
-Wall -pedantic -Werror -Wextra -std=gnu89
```

</details>
<details open>
<summary> <strong> Example </strong> </summary>

```
julien@ubuntu:~/$ cat 1-main.c 
#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    char c;

    c = '0';
    printf("%c: %d\n", c, _isdigit(c));
    c = 'a';
    printf("%c: %d\n", c, _isdigit(c));
    return (0);
}
julien@ubuntu:~/$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 1-main.c 1-isdigit.c -o 1-isdigit
julien@ubuntu:~/$ ./1-isdigit 
0: 1
a: 0
julien@ubuntu:~/$ 
```

</details>

## Tasks :page_with_curl:

* **0. isupper**
  * [0-isupper.c](./0-isupper.c): C function that checks for uppercase characters. Returns
  `1` if the character is uppercase, `0` otherwise.

* **1. isdigit**
  * [1-isdigit.c](./1-isdigit.c): C function that checks for a digit (`0` through `9`).
  Returns `1` if the character is a digit, `0` otherwise.

* **2. Collaboration is multiplication**
  * [2-mul.c](./2-mul.c): C function that multiplies two integers. Returns the value of
  the multiplication.

* **3. The numbers speak for themselves**
  * [3-print_numbers.c](./3-print_numbers.c): C function that prints the numbers `0` to
  `9`, followed by a new line.

* **4. I believe in numbers and signs**
  * [4-print_most_numbers](./4-print_most_numbers.c): C function that prints the numbers
  `0` to `9` except for `2` and `4`, followed by a new line.

* **5. Numbers constitute the only universal language**
  * [5-more_numbers.c](./5-more_numbers.c): C function that prints the numbers `0` to
  `14`, followed by a new line, ten times.

* **6. The shortest distance between two points is a straight line**
  * [6-print_line.c](./6-print_line.c): C function that draws a straight line in the terminal
  using the character `_`, followed by a new line.
    * If the function receives length input of zero or less, only a new line is printed.

* **7. I feel like I am diagonally parked in a parallel universe**
  * [7-print_diagonal.c](./7-print_diagonal.c): C function that draws a diagonal
  line in the terminal using the `\` character, followed by a new line.
    * If the function receives length input of zero or less, only a new line is printed.

* **8. You are so much sunshine in every square inch**
  * [8-print_square.c](./8-print_square.c): C function that prints a square using the `#`
  character, followed by a new line.
    * If the function receives size input of zero or less, only a new line is printed.

* **9. Fizz-Buzz**
  * [9-fizz_buzz.c](./9-fizz_buzz.c): C program that prints the numbers from `1` to
  `100`, but for multiples of three, `Fizz` is printed instead of the number, for
  multiples of five, `Buzz`, and for multiples of both three and five, `FizzBuzz`.
    * Each number or word is separated by a space.

* **10. Triangles**
  * [10-print_triangle.c](./10-print_triangle.c): C function that prints a triangle using
  the `#` character, followed by a new line.
    * If the function receives size input of zero or less, only a new line is printed.

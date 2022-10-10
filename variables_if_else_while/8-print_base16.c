#include <stdio.h>
/**
 * main - prints numbers base 16
 * Return: Always 0
 */
int main(void)
{
char number;
char letter;    
for (number = '0'; number <= '9'; number++)
{
putchar(number);
}
for (letter = 'a'; letter <= 'f'; letter++)
{
putchar(letter);
}
putchar('\n');
return (0);
}

#include "main.h"

/**
 * jack_bauer - prints all minutes of a day
 * 
 * Return: Anything
 */

void jack_bauer(void)
{
int j, i, k, l;
for (j = 0; j < 3; j++)
{
for (i = 0; i < 4; i++)
{
for (k = 0; k < 6; k++)
{
for (l = 0; l <= 9; l++)
{
printf("%d", j);
printf("%d:", i);
printf("%d", k);
printf("%d", l);
putchar('\n');
}
}
}
}
}

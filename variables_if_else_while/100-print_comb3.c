#include <stdio.h>
/**
 * main - prints all posible combinations of 2 digits 
 * Return: Always 0
 */ 
int main()
{
int i;
int j;
for(i = 0; i <= 9; i++)
{
for(j = i + 1; j <= 9; j++)
{
if(i == j)
{
continue;
}
putchar((i%10)+ '0');
putchar((j%10)+ '0');
if(i==8 && j==9)
{
putchar('\n');
continue;
}
putchar(',');
putchar(' ');
}
}
return (0);
}

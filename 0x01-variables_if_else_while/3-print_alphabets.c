#include <stdio.h>

/**
 * main - Prints the alphabet
 *
 * Return: Always 0
 */
int main(void)
{
char alp[53] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
int i;
for (i = 0; i < 26; i++)
{
putchar(alp[i]);
}
putchar(' ');
return (0);
}


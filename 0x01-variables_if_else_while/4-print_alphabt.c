#include <stdio.h>
/**
 * main - Prints the alphabet without q and e.
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
        char ch = 'a';

        while (ch <= 'z')
        {
                putchar(ch);
                ch = ch + 1;
        }
        if (ch == q || ch == 'e')
        {		ch++;
                putchar(ch);
                ch = ch + 1;
        }
        putchar('\n');
        return (0);

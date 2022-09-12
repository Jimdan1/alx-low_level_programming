#include <stdio.h>
/**
* main - print alphabets except e and q
*
* Description: using main function
* this programn prints all alphabets except e and q
* Return: 0
*/
int main (void)
{
char ch;
for (ch = 'a' ; ch <= 'z' ; ch++)
{
if (ch != 'e' && ch != 'q')
{
putchar(ch);
}
}
putchar('\n');
return (0);
}

#include <stdio.h>
/**
* main -print the alphabet in lowercase
*
* using main function
* this program prints the alphabets in lowercase
* Return: 0
*/
int main(void)
{
char ch;
for (ch = 'a' ; ch <= 'z' ; ch++)
{
putchar(ch);
}
putchar('\n');
return (0);
}

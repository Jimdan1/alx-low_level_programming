#include <stdio.h>
/**
* main - print all single digit numbers of base 10 starting from 0
*
* Description : using main funtion
* This program "print all single digit numbers of base 10"
* Return: 0
*/
int main(void)
{
int x;
for (x = '0'; x <= '9'; x++)
{
putchar(x);
}
putchar('\n');
return (0);
}

#include <stdio.h>
/**
* main - print all single digit numbers of base 10 starting from 0
*
* Description : using main funtion
* This program is a script to print all single digit numbers of base 10
* return: 0
*/

int main(void)

{
int d;
for (d = 0; d <= 9; d++)
{
putchar(d);
}
putchar('\n');
return (0);
}

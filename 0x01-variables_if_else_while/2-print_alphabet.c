#include <stdio.h>
/**
  * main - Entry point
  * You can only use the putchar function
  * Return: 0 always (success)
  */
int main(void)
{
char abc;

for (abc = 'a'; abc <= 'z'; abc++)
{
putchar(abc);
}
putchar('\n');
return (0);
}

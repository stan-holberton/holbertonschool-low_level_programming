#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
printf("%d\n", add(89, 9));    // 98
printf("%d\n", add(0, 9));      // 9
printf("%d\n", add(0, 0));      // 0
printf("%d\n", add(89, 0));     // 89
printf("%d\n", add(-89, 12));   // -77
printf("%d\n", add(12, 12));    // 24
printf("%d\n", add(-89, -98));  // -187
return (0);
}

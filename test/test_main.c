#include <stdio.h>
#include "test_main.h"
#include "test_helpers.h"
#include "test_printf.h"

/**
 * main - Start of the project
 *
 * Return: 0 on success otherwise non-zero on failure
*/

int main(void)
{
int failed_test = 0;
failed_tests += test_printf();

if (failed_tests == 0)
{
printf("All tests passed!\n");
}
else
{
printf("%d test(s) failed.\n", failed_tests);
}
return (0);
}

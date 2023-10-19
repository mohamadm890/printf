<<<<<<< HEAD
#include "main.h"
=======
#include <unistd.h>

>>>>>>> ac22cc40fff10f04ebde2fda94b748a31a0c0f2c
/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
<<<<<<< HEAD
return (buffer(c));
}

/**
 * buffer - Save the character in a buffer
 * @c: Character
 *
 * Return: 1
 **/
int buffer(char c)
{
static char buffering[1024];
static int i;
if (c == -1 || i == 1024)
{
write(1, buffering, i);
i = 0;
}
if (c != -1)
buffering[i++] = c;
return (1);
=======
return (write(1, &c, 1));
>>>>>>> ac22cc40fff10f04ebde2fda94b748a31a0c0f2c
}

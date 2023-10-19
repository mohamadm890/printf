#include "main.h"

/**
 * _strlen - returning the length of the strings
 * @d: string to the pointer
 * Return: p
*/
int _strlen(char *d)
{
int p;
for (p = 0; d[p] != 0; p++)
;
return (p);
}
/**
 * _strlenc - strlen function applied to a constant pointer
 * @d: char pointer
 * Return: p
*/
int _strlenc(const char *d)
{
int p;
for (p = 0; d[p] != 0; p++)
;
return (p);
}

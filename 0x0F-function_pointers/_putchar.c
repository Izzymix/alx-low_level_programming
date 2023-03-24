#include <unistd.h>
#include "main.h"

/*
 * _putchar - write the character c to stdout
 * @c: The character to print
 *
 *Return 0: on success 1
 *on error -1 is returned and error no is set appropriately. 
 */

int _putchar(char)
{
return (write (1, &c, 1));
}

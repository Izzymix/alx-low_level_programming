#include "main.h"
#include <unistd.h>
/**
 *_putchcar - write the 
 *@c: The charactyer to p
 *
 *Return: on success 1.
 *
 * on error, -1 is returned,
 */
int _putchar(char c)
{
return (write (1, &c, 1));
}

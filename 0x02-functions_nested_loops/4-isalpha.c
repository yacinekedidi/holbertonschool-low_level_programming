#include "holberton.h"
/**
 * _isalpha - Short description, single line
 * @c: Description of parameter x
(* a blank line
* Description: Longer description of the function)?
(* section header: Section description)*
* Return: Description of the returned value
*/
int _isalpha(int c)
{
int x = 0;
if((c >= 97 && c <= 122 ) || (c >= 65 && c <= 90 ))  
x = 1;
return (x);
}

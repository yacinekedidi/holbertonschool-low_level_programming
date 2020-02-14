#include "holberton.h"
/**
 * _isdigit - Short description, single line
 * @c: Description of parameter c
(*
* Description: Longer description of the function)?
(* section header: Section description)*
* Return: Description of the returned value
*/
int _isdigit(int c)
{
int x = 0;
if (c >= 48 && c <= 57)
x = 1;
return (x);
}

#include "holberton.h"
/**
 * rev_string - Short description, single line
 * @s: Description of parameter x
(*
* Description: Longer description of the function)?
(* section header: Section description)*
* Return: Description of the returned value
*/
void rev_string(char *s)
{
char x[509];    

int i = 0, j;  
while (s[i] != '\0')
{
x[i] = s[i];   
i++;    
}
i--;
for (j = i ; j >= 0 ; j--)  
s[i - j] = x[j]; 
}

#include<stdio.h>

/**
 * main - Short description, single line
 * @void: Description of parameter x
(* a blank line
* Description: Longer description of the function)?
(* section header: Section description)*
* Return: Description of the returned value
*/
int main(void)
{
int i, j;

for (i = 0 ; i < 100 ; i++)
{
	for (j = 0 ; j < 100 ; j++)
	{
		if (j > i)
		{
		putchar((i / 10) + '0');
		putchar((i % 10) + '0');
		putchar(' ');
		putchar((j / 10) + '0');
		putchar((j % 10) + '0');
		if (i + j != 197)
		{
			putchar(',');
			putchar(' ');
		}
		}
	}
}

putchar('\n');
return (0);
}

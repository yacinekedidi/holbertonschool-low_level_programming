#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/**
 * main - Short description, single line
 * @void: Description of parameter a
* Description: Longer description of the function)?
(* section header: Section description)*
* Return: Description of the returned value
*/
int main(void)
{
int i = 0, n, j = 0;
char tab[509];
srand(time(0));
while (i < 2645)
{
n = rand() % 127;
if (n > 32)
{
tab[j] = n;
i += n;
j++;
}
}
tab[j] = '\0';
printf("%s", tab);
return (0);
}

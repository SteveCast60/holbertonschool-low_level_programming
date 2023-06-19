#include <stdio.h>
/** main - input program
 *
 *
 * Description: alphabet in lowercase */

int main(void)
{
	char alphabet;
	
	for (alphabet = 'a'; alphabet <= 'z' ; alphabet++)
	{
		putchar(alphabet);
	}
	putchar('\n');
	return (0);
}

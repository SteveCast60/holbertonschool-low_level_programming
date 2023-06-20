#include <stdio.h>

int main()
{
    for(int x = 'A'; x <= 'Z'; x++)
    {
        x = tolower(x);
        putchar(x);
    }
    for(int x = 'a'; x <= 'z'; x++)
    {
	    x =toUpper(x);
	    putchar(x);
    }
    return 0;
}

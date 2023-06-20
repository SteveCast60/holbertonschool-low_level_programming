#include <stdio.h>

int main()
{
    for(int x = 'A'; x <= 'Z'; x++)
    {
        char small = tolower(x);
        putchar(small);
    }
    for(int x = 'a'; x <= 'z'; x++)
	    char upper = toupper(x);
    putchar(small);
    return 0;
}

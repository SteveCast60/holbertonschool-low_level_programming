#include <stdio.h>

/**
 * _strspn - Entry point
 * @s: input
 * @accept: input
 * Return: always 0 (success)
 */

unsigned int _strspn(char *s, char *accept)
{
    int count = 0;
 
    // Iterating string T.
    for (int i = 0; i < strlen(accept); i++)
    {
        // If end of string S.
        if (count == strlen(s))
            break;
 
        // If character match,
        // increment counter.
        if (accept[i] == s[count])
            count++;
    }
 
    return count;
}

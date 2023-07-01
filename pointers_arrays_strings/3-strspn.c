#include <stdio.h>
#include <bits/stdc++.h>

/**
 * _strspn - Entry point
 * @s: input
 * @accept: input
 * Return: always 0 (success)
 */

unsigned int _strspn(char *s, char *accept)
{
	int i;
    int count = 0;

    for (i = 0; i < strlen(accept); i++)
    {
        if (count == strlen(s))
            break;

        if (accept[i] == s[count])
            count++;
    }

    return count;
}

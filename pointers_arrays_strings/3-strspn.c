#include <stdio.h>

unsigned int _strspn(char* s, char* accept) {
    unsigned int length = 0;
    int found = 0;
    char *acceptPtr;


    while (*s != '\0') {
        found = 0;
        *acceptPtr = accept;
        while (*acceptPtr != '\0') {
            if (*s == *acceptPtr) {
                found = 1;
                break;
            }
            acceptPtr++;
        }

        if (!found) {
            break;
        }
        length++;
        s++;
    }

    return length;
}

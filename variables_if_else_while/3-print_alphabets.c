#include <stdio.h>

void print_alphabet() {
    char lowercase[27];
    char uppercase[27];
    int i;

    for (i = 0; i < 26; i++) {
        lowercase[i] = 'a' + i;
    }
    lowercase[26] = '\0';

    for (i = 0; i < 26; i++) {
        uppercase[i] = 'A' + i;
    }
    uppercase[26] = '\0';

    printf("Lowercase alphabet: %s\n", lowercase);
    printf("Uppercase alphabet: %s\n", uppercase);
}

int main() {
    print_alphabet();
    return 0;
}

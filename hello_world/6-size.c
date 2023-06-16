#include <stdio.h>

int main() {
    printf("Size of int: %lu bytes\n", sizeof(int) * 8);
    printf("Size of char: %lu bytes\n", sizeof(char) * 8);
    printf("Size of float: %lu bytes\n", sizeof(float) * 8);
    printf("Size of double: %lu bytes\n", sizeof(double) * 8);
    printf("Size of long: %lu bytes\n", sizeof(long) * 8);
    printf("Size of long long: %lu bytes\n", sizeof(long long) * 8);
    printf("Size of short: %lu bytes\n", sizeof(short) * 8);
				        
    return 0;
}

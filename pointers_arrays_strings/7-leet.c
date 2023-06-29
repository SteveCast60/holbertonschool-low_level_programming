#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

char *leet(char *str) {
    char *encoded = malloc(strlen(str) + 1);
    int i, j;
    char *letters = "AEOTL";
    char *replacements = "43071";
    
    if (encoded == NULL) {
        printf("Memory allocation failed.\n");
        return NULL;
    }
    
    for (i = 0; str[i] != '\0'; i++) {
        encoded[i] = str[i];
        for (j = 0; j < strlen(letters); j++) {
            if (tolower(str[i]) == letters[j]) {
                encoded[i] = replacements[j];
                break;
            }
        }
    }
    
    encoded[i] = '\0';
    
    return encoded;
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

char *leet(char *str) {
    char *encoded = malloc(strlen(str) + 1);
    int i, j;
    char *letters = "AEOTL";
    char *replacements = "43071";
    
    if (encoded == NULL) {
            printf("Memory allocation failed.\n");
            return NULL;
        }
    
    for (i = 0; str[i] != '\0'; i++) {
            encoded[i] = str[i];
            for (j = 0; j < strlen(letters); j++) {
	                if (tolower(str[i]) == letters[j]) {
			                encoded[i] = replacements[j];
			                break;
			            }
	            }
        }
    
    encoded[i] = '\0';
    
    return encoded;
}

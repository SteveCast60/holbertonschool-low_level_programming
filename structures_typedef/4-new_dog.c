#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

dog_t *new_dog(char *name, float age, char *owner) {
    // Allocate memory for the new dog structure
    dog_t *newDog = (dog_t *)malloc(sizeof(dog_t));

    if (newDog == NULL) {
        // Failed to allocate memory for the dog structure
        return NULL;
    }

    // Allocate memory and make a copy of the name
    newDog->name = (char *)malloc(strlen(name) + 1);
    if (newDog->name == NULL) {
        free(newDog); // Free the previously allocated memory
        return NULL;
    }
    strcpy(newDog->name, name);

    // Allocate memory and make a copy of the owner
    newDog->owner = (char *)malloc(strlen(owner) + 1);
    if (newDog->owner == NULL) {
        free(newDog->name); // Free the previously allocated memory
        free(newDog);      // Free the dog structure memory
        return NULL;
    }
    strcpy(newDog->owner, owner);

    // Assign the age
    newDog->age = age;

    return newDog;
}

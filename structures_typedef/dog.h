#ifndef DOG_H
#define DOG_H

#include <stddef.h> /* Include for NULL */
#include <stdio.h>  /* Include for printf */
#include <stdlib.h> /* Include for malloc and free */

/**
 * struct dog - Defines a dog's attributes
 * @name: Name of the dog
 * @age: Age of the dog
 * @owner: Owner's name
 *
 * Description: This struct stores information about a dog,
 * including its name, age, and owner's name.
 */
struct dog
{
char *name;
float age;
char *owner;
};

/**
 * dog_t - Typedef for struct dog
 */
typedef struct dog dog_t;

/* Function prototypes */
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif /* DOG_H */


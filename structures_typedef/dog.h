#ifndef DOG_H
#define DOG_H

#include <stddef.h> /* Include for NULL */
#include <stdio.h>  /* Include for printf */

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

#endif /* DOG_H */


#include <stddef.h> /* Required for NULL */
#include "dog.h"

/**
 * init_dog - Initializes a dog structure
 * @d: Pointer to the struct dog to be initialized
 * @name: Pointer to the name of the dog
 * @age: Age of the dog
 * @owner: Pointer to the owner's name
 *
 * Description: This function initializes a `struct dog`
 * with the given name, age, and owner.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL) /* Check if pointer is not NULL to avoid segmentation fault */
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}


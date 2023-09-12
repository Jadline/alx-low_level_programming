#include <stdio.h>
#include <string.h>

/**
 * struct dog - A structure representing a dog.
 * @name: The name of the dog.
 * @age: The age of the dog.
 * @owner: The owner of the dog.
 */
struct dog {
	char name[50];
	float age;
	char owner[50];
};
/**
 * init_dog - Initializes a struct dog.
 * @d: A pointer to the struct dog to initialize.
 * @name: The name to set for the dog.
 * @age: The age to set for the dog.
 * @owner: The owner to set for the dog.
 *
 * Description: This function initializes a struct dog with the provided
 * name, age, and owner values. It ensures that the string fields are
 * null-terminated and does not exceed the maximum allowed length.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		strncpy(d->name, name, sizeof(d->name) - 1);
		d->name[sizeof(d->name) - 1] = '\0';
		d->age = age;
		strncpy(d->owner, owner, sizeof(d->owner) - 1);
		d->owner[sizeof(d->owner) - 1] = '\0';
	}
}

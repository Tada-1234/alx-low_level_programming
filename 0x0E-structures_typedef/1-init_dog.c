#include <stdio.h>
#include "dog.h"
/**
 * init_dog - initializes a variable of type dog
 * @d: struct pointer
 * @name: holds name
 * @age: holds age
 * @owner: holds owner
 *
 * Return: nothing
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "dog.h"
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t new_dog;
	dog_t *point;
	char *new_dog_1 = malloc(sizeof(char));
	char *new_dog_2 = malloc(sizeof(char));
	new_dog.name = name;
	new_dog.age = age;
	new_dog.owner = owner;
	point = &new_dog;
	if (new_dog_1 == NULL)
	{
		return (NULL);
	}
	if (new_dog_1 == NULL)
	{
		return (NULL);
	}
	strcpy(new_dog_1,new_dog.name);
	strcpy(new_dog_2, new_dog.owner);
	return (point);
}

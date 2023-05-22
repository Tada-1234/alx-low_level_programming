#ifndef _DOG_H
#define _DOG_H
#include <stdio.h>
/**
 *struct dog - initializes a variable of type dog
 * @name: First memeber
 * @age: second meember
 * @owner: third meember
 *
 * Description: creates a new structure with the mentioned variables
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
#endif

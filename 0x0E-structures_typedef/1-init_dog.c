#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * init_dog - initialize a variable of type struct dog
 *
 * @d: dog
 *
 * @name: pointer
 *
 * @age: flaot
 *
 * @owner: pointer char
 *
 * Return: no
*/

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}

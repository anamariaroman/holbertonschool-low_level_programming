#include "dog.h"
/**
 * init_dog - function to initialize elements, i love the dogs:
 * @d: ptr
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	/** if the direction is different from 0 we can then initialize its elements*/
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}

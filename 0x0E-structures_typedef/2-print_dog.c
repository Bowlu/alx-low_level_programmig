#include "dog.h"
#include <stdio.h>

/**
 * init_dog - function that initializes a variable of type struct dog
 * @d: pointer to struct dog
 * @name: pointer to char
 * @age: parameter
 * @owner: pointer to char
 *
 * Return: 0
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		(*d).name = name;
		(*d).age = age;
		(*d).owner = owner;
	}
}

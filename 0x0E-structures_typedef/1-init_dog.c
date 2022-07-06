#include "dog.h"
#include <stdio.h>

/** void init_dog - function that initializes a variable of type struct dog
 * @d: pointer to struct dog
 * @name: argument
 * @age: argument
 * @owner: argument
 *
 * Return: 0
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	struct dog *p;

	(*p).name = name;
	(*p).age = age;
	(*p).owner = owner;

	return (0);
}

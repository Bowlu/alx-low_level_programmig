#include "dog.h"
#include <stdio.h>

/**
 * init_dog - function that prints struct dog
 * @d: pointer to struct dog
 *
 * Return: 0
 */

void init_dog(struct dog *d)
{
	if (d)
	{
		if (!((*d).name))
			printf("Name: (nil)\n");
		else
		{
			printf("Name: %s\n", (*d).name);
			printf("Age: %f\n", (*d).age);
		}
		if (!((*d).owner))
			printf("Owner: (nil)\n");
		else
			printf("Owner: %s\n", (*d).owner);
	}
}


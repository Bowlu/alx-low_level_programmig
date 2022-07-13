#ifndef STRUCT_DOG
#define STRUCT_DOG

/* structure declaration for the first task */

/**
 * struct dog - structure with a variable name 'dog'
 * @name: first member of the structure
 * @age: second member
 * @owner: third member
 *
 * Return: SUCCESS
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

/* prototype */
void init_dog(struct dog *d, char *name, float age, char *owner);
typedef struct dog dog_t;
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif /* STRUCT_DOG */


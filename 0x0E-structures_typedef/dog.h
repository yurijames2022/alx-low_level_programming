#ifndef DOG_H
#define DOG_H

/**
 * struct dog - A structure to store a dog's characteristics
 * @name: Name of dog
 * @age: Age of dog
 * @owner: The owner of the dog
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

typedef struct dog dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
void free_dog(dog_t *d);
dog_t *new_dog(char *name, float age, char *owner);

#endif

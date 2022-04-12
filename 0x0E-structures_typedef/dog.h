#ifndef DOG_H
#define DOG_H
/**
 * struct dog - structure definition f a dog
 * @name: character pointer for dog name
 * @age: float for dog age
 * @owner: character of dog owner
 */

typedef struct dog
{
	float age;
	char *name;
	char *owner;
} dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif

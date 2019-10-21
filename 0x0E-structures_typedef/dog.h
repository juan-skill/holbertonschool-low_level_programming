#ifndef DOG_H
#define DOG_H

/**
 * dog - definition of the dog object
 *
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
}dog_v;

void init_dog(struct dog *, char *, float, char *);

#endif

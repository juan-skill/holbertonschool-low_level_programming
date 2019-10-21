#ifndef DOG_H
#define DOG_H

/**
 * struct dog - definition of the dog object
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
} dog_t;

int _putchar(char);
void init_dog(struct dog *, char *, float, char *);
void print_dog(struct dog *d);

#endif

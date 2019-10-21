#include "dog.h"
#include <stdio.h>

/**
 * print_dog - prints a struc dog
 *
 * @d: a pointer that points to variable of type struct dog
 * Return: void
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;
	if (d->name == NULL)
		d->name = " (nil)";
	if (d->owner == NULL)
		d->owner = " (nil)";

	printf("Name:%s\nAge:%f\nOwner:%s\n", d->name, d->age, d->owner);
}

#include "dog.h"
#include <stdio.h>
/**
 * print_dog - function to print struct dog
 * @d: struct dog
 */

void print_dog(struct dog *d)
{
	if (d)
	{
		if (d->name == NULL)
			printf("name:(nil)\n");
		else
			printf("name: %s\n", d->name);
		printf("Age: %f\n", d->age);
		if (d->owner == NULL)
			printf("owner: (nil)\n");
		else
			printf("owner: %s\n", d->owner);
	}
}

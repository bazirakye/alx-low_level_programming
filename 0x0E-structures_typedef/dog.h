#ifndef DOG_H
#define DOG_H

/**
 * struct dog - newly created data stucture
 * @name: name member for dog
 * @age: age member for dog
 * @owner: owner member for dog
 *
 * Description: This structure gives details about a dog
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif

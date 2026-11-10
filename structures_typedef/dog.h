#ifndef DOG_H
#define DOG_H
#include <stdio.h>
/**
 * struct dog - a dog's basic info
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 *
 * Description: This struct stores information about a dog, including its
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
#endif

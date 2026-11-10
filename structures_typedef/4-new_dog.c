#include <stdio.h>
#include "dog.h"
/*
 * new_dog - creates a new dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 *
 * Return: pointer to the new dog (Success), NULL (Error)
 */
dog_tnew_dog(char name, float age, charowner)
{
	dog_t newdog;
	int i = 0, j = 0, len1 = 0, len2 = 0;
	char s1, s2;

	while (name[len1] != '\0')
		len1++;
	s1 = malloc(sizeof(name) * (len1 + 1));
	if (s1 == NULL)
		return (NULL);
	while (name[i] != '\0')
	{
		s1[i] = name[i];
		i++;
	}
	s1[i] = name[i];
	while (owner[len2] != '\0')
		len2++;
	s2 = malloc(sizeof(owner) (len2 + 1));
	if (s2 == NULL)
	{
		free(s1);
		return (NULL);
	}
	while (owner[j] != '\0')
	{
		s2[j] = owner[j];
		j++;
	}
	s2[j] = owner[j];
	newdog = malloc(sizeof(dog_t));
	if (newdog == NULL)
	{
		free(s1);
		free(s2);
		return (NULL);
	}
	newdog->name = s1;
	newdog->owner = s2;
	newdog->age = age;
	return (newdog);
}

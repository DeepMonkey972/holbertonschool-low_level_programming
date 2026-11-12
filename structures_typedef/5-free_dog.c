#include <stdio.h>
#include "dog.h"
/**
 * free_dog - frees memory allocated for a dog
 * @d: pointer to the dog to be freed
 *
 * Description: This function frees the memory allocated for a dog structure,
 * including its name and owner strings.
 */
void free_dog(dog_t *d)
{
	if (d == NULL)
		return;
	free(d->name);
	free(d->owner);
	free(d);
}

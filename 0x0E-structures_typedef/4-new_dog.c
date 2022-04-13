#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
#include <string.h>

/**
 * new_dog - function that creates a new dog
 * @name: pointer to name
 * @age: dog age
 * @owner: pointer to owner
 * Return: pointer to new dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *newDog;

	newDog = malloc(sizeof(dog_t));
	if (newDog == NULL)
		return (NULL);
	newDog->name = malloc(sizeof(char) * strlen(name) + 1);
	if (newDog->name == NULL)
	{
		free(newDog);
		return (NULL);
	}
	newDog->owner = malloc(sizeof(char) * strlen(owner) + 1);
	if (newDog->owner == NULL)
	{
		free(newDog->name);
		free(newDog);
		return (NULL);
	}
	newDog->name = strcpy(newDog->name, name);
	newDog->age = age;
	newDog->owner = strcpy(newDog->owner, owner);
	return (newDog);
}

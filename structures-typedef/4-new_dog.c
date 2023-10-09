#include "dog.h"
#include <string.h>
#include <stdlib.h>
/**
* new_dog - creates new dog
* Description:
* @name: name of dog
* @age: age of dog
* @owner: owner of dog
* Return: pointer to new
*/

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *n_dog = NULL;

	n_dog = (dog_t *)malloc(sizeof(dog_t));
	if (n_dog == NULL)
		return (NULL);

	n_dog->name = (char *)malloc(strlen(name) + 1);
	n_dog->owner = (char *)malloc(strlen(owner) + 1);
	if (n_dog->name == NULL || n_dog->owner == NULL)
	{
		free(n_dog->name);
		free(n_dog->owner);
		free(n_dog);
		return (NULL);
	}
	strcpy(n_dog->name, name);
	strcpy(n_dog->owner, owner);
	n_dog->age = age;

	return (n_dog);
}

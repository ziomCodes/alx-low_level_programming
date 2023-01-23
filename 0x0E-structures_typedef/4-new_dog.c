#include "dog.h"

/**
 * new_dog - create a new dog
 * @name: char string name
 * @age: int age
 * @owner: char string owner
 * Return: pointer to new dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	struct dog *d;
	int i, i1, i2;
	char *m, *p;

	d = malloc(sizeof(struct dog));
	if (d == NULL)
		return (NULL);

	for (i = 0; name[i] != '\0'; i++)
		;
	for (i1 = 0; owner[i1] != '\0'; i1++)
		;

	m = malloc(sizeof(char) * i + 1);
	if (m == NULL)
	{
		free(d);
		return (NULL);
	}
	p = malloc(sizeof(char) * i1 + 1);
	if (p == NULL)
	{
		free(m);
		free(d);
		return (NULL);
	}
	for (i2 = 0; i2 <= i; i2++)
		m[i2] = name[i2];
	for (i2 = 0; i2 <= i1; i2++)
		p[i2] = owner[i2];

	d->name = m;
	d->age = age;
	d->owner = p;

	return (d);
}

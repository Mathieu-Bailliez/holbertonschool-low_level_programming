#ifndef DOG_H
#define DOG_H

/**
 * struct dog - Structure représentant un chien
 * @name: Le nom du chien
 * @age: L'âge du chien
 * @owner: Le propriétaire du chien
 */
struct dog
{
	char  *name;
	float  age;
	char  *owner;
};

/**
 * typedef struct dog dog_t - Alias pour struct dog
 */
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);

#endif /* DOG_H */

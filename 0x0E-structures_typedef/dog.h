#ifndef DOG_H
#define DOG_H

/**
 * struct dog - A new type describing  a dog.
 * @name: dog name
 * @age: dog age
 * @owner: dog owner
 */
struct dog
{
	char *name;
	float age;
	char owner;
};
/**
 * dog_t-Typedef for struct dog
 */
typedef struct dog dog_t;

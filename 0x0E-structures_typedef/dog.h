#ifndef DOG_H
#define DOG_H

/**
 * struct dog - a new type
 * @name: the name to be assigned
 * @age: the age to be given
 * @owner: the owner of the info
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

/**
 * dog_t - typedef for struct dog
 */
typedef struct dog dog_t;

dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif

#ifndef DOG_H
#define DOG_H

/**
 * struct dog - struct for dog
 *
 * @name: dog's name
 *
 * @age: dog's age
 *
 * @owner: owner's name
 *
 * Description: struct for the dog including his name age and owner
*/
struct dog
{
	char *name;
	float age;
	char *owner;
};

typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif

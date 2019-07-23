#ifndef MY_DOGS
#define MY_DOGS

/**
 * struct dog - Object dog
 * @name: Store char name
 * @age: Store float age
 * @owner: Store the ownwe dog
 */

typedef struct dog dog_t;

struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

dog_t *new_dog(char *name, float age, char *owner);

void free_dog(dog_t *d);
#endif

#ifndef MY_DOGS
#define MY_DOGS

/**
 * struct dog - Object dog
 * @name: Store char name
 * @age: Store float age
 * @owner: Store the ownwe dog
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

typedef struct dog dog_t;
#endif

#ifndef DOG_H
#define DOG_H

/**
 * struct dog - Short description
 * @name: dog name
 * @age: Second member
 * @owner: Third member
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

typedef struct dog
{
        char *name;
        float age;
        char *owner;
}dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif

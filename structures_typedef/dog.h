#ifndef DOG_H
#define DOG_H

/**
 * struct dog - structure représentant un chien
 * @name: nom du chien
 * @age: âge du chien
 * @owner: propriétaire du chien
 */
struct dog
{
char *name;
float age;
char *owner;
};

/**
 * init_dog - Initializes a variable of type struct dog.
 * @d: pointer to the dog structure
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 */
void init_dog(struct dog *d, char *name, float age, char *owner);


/**
 * print_dog - Prints a struct dog
 * @d: pointer to the struct dog to print
 */
void print_dog(struct dog *d);

#endif /* DOG_H */

#ifndef DOG_INFO
#define DOG_INFO

/**
 * struct dog - new structure
 *
 * @name: dog name
 * @age: dog age
 * @owner: dog owner
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
int puss(char *hello);
char *newcopy(char *uno, char *nano);
void free_dog(dog_t *d);

#endif

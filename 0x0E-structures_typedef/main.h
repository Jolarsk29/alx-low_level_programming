#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>

/**
*void prototypes()
*int prototypes()
*char prototypes()
*/

typedef struct dog dog_t;
int _putchar(char c);
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif /*MAIN_H*/

#ifndef SEARCH_ALGOS_H
#define SEARCH_ALGOS_H
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

/**
 * struct listint_s - this is for singly linked list
 *
 * @n: Integer for n
 * @index: Index list good
 * @next: Pointer for the next
 *
 * Description: this is search algo for projects
 */
typedef struct listint_s
{
	int n;
	size_t index;
	struct listint_s *next;
} listint_t;

/**
 * struct skiplist_s - this is for linked list
 *
 * @n: Integer for n
 * @index: Index list good
 * @next: Pointer for the next
 * @express: Pointer the express
 *
 * Description: this is search algo for projects
 */
typedef struct skiplist_s
{
	int n;
	size_t index;
	struct skiplist_s *next;
	struct skiplist_s *express;
} skiplist_t;

int exponential_search(int *array, size_t size, int value);
int advanced_binary(int *array, size_t size, int value);
int linear_search(int *array, size_t size, int value);
listint_t *jump_list(listint_t *list, size_t size, int value);
int jump_search(int *array, size_t size, int value);
skiplist_t *linear_skip(skiplist_t *list, int value);
int binary_search(int *array, size_t size, int value);
int interpolation_search(int *array, size_t size, int value);

#endif

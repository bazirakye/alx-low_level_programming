#ifndef LISTS_H
#define LISTS_H
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
/**
* struct list_s - singly list
* @str: string
* @len: string length
* @next: pointer to nextt node;
*/

struct list_s
{
	char *str;
	unsigned int len;
	struct list_s *next;
}list_t;

size_t print_list(const list_t *h);

#endif

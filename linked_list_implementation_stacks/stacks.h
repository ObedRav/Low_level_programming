#ifndef STACKS_H
#define STACKS_H

#include <stdio.h>
#include <stdlib.h>

struct node {
	int data;
	struct node *next;
} *top;

void push(int datau);
void print(void);
int isEmpty(void);
int peek(void);
int pop(void);
void free_list(void);

#endif 
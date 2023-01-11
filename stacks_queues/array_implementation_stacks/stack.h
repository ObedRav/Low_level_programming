#ifndef STACK_H
#define STACK_H

#include <stdlib.h>
#include <stdio.h>

#define MAX 4

extern int stack_arr[MAX];
extern int top;

int isFull(void);
int isEmpty(void);
void push(int data);
int pop(void);
int peek(void);
void print(void);

#endif
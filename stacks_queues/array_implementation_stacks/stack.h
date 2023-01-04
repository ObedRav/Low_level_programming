#ifndef STACK_H
#define STACK_H

#include <stdlib.h>
#include <stdio.h>

#define MAX 4

int stack_arr[MAX];
int top;

int isFull(void);
int isEmpty(void);
void push(int data);
int pop(void);
int peek(void);
void print(void);

#endif
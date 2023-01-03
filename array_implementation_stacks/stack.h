#ifndef STACK_H
#define STACK_H

#include <stdlib.h>
#include <stdio.h>

#define MAX 4

int stack_arr[MAX];
int top;

int isFull();
int isEmpty();
void push(int data);
int pop();
int peek();
void print();

#endif
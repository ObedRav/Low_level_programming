#ifndef QUEUE_H
#define QUEUE_H

#include <stdio.h>
#include <stdlib.h>

#define MAX 10

extern int queue[MAX];
extern int front, back;

int isEmpty(void);
int isFull(void);
void enqueue(int data);
int dequeue(void);
void print(void);
int peek(void);

#endif
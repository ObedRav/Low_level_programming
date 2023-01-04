#ifndef QUEUE_H
#define QUEUE_HD

#include <stdio.h>
#include <stdlib.h>

struct Node {
	int data;
	struct Node* next;
};

struct Node* front;
struct Node* rear;

void Enqueue(int data);
int isEmpty(void);
int Dequeue(void);
int Front(void);
void Print(void);

#endif
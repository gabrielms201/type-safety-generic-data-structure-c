#pragma once
#include "stdlib.h"
#include "stdio.h"

typedef double TYPE;
struct Stack
{
    int Top;
    unsigned int Size;
    TYPE* Content;
};

struct Stack* Start(unsigned int size);
int IsFull(struct Stack* stack);
int IsEmpty(struct Stack* stack);
int Size(struct Stack* stack);
TYPE Peek(struct Stack* stack);
TYPE Pop(struct Stack* stack);
void Push(struct Stack* stack, TYPE element);
void Delete(struct Stack* stack);

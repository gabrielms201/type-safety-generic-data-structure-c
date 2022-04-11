#include "stack.h"

struct Stack* Start(unsigned int size)
{
    struct Stack* stack = malloc(sizeof(struct Stack));
    stack->Size = size;
    stack->Top = -1;
    stack->Content = (TYPE*)malloc(stack->Size * sizeof(TYPE));
    return stack;
}

int IsFull(struct Stack* stack)
{
    return (stack->Top == stack->Size -1);
}

int IsEmpty(struct Stack* stack)
{
    return (stack->Top == -1);
}

int Size(struct Stack* stack)
{
    return stack->Top + 1;
}

TYPE Peek(struct Stack* stack)
{
    if (IsEmpty(stack))
    {
        return 0;
    }
    return stack->Content[stack->Top];
}

TYPE Pop(struct Stack* stack)
{
    if (IsEmpty(stack))
    {
        printf("Can't Pop: stack underflow\n");
        return 0;
    }
    return stack->Content[stack->Top--];
}

void Push(struct Stack* stack, TYPE element)
{
    if (IsFull(stack))
    {
        printf("Can't Push: stack overflow\n");
        return;
    }
    stack->Content[++stack->Top] = element;
}

void Delete(struct Stack* stack)
{
    free(stack);
}



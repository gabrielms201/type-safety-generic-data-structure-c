#pragma once
#include "stdlib.h"
#include "stdio.h"
#include "string.h"

typedef double TYPE;
struct Stack
{
    int Top;
    int Size;
    TYPE* Content;
};

struct Stack* Start();
inline int IsFull(struct Stack* stack);
inline int IsEmpty(struct Stack* stack);
inline int Size(struct Stack* stack);
inline TYPE Peek(struct Stack* stack);
inline TYPE Pop(struct Stack* stack);
inline void Push(struct Stack* stack, TYPE element);
inline void Delete(struct Stack* stack);

inline struct Stack* Start()
{
    struct Stack* stack = malloc(sizeof(struct Stack));
    if(stack == '\0')
    {
        printf("ERROR: Can't allocate Memory");
        abort();
    }
    stack->Top = -1;
    stack->Size = 1;
    stack->Content = malloc(stack->Size * sizeof(TYPE));
    return stack;
}

inline int IsEmpty(struct Stack* stack)
{
    return (stack->Top == -1);
}

inline int Size(struct Stack* stack)
{
    return stack->Top + 1;
}

inline TYPE Peek(struct Stack* stack)
{
    if (IsEmpty(stack))
    {
        return 0;
    }
    return stack->Content[stack->Top];
}

inline TYPE Pop(struct Stack* stack)
{
    if (IsEmpty(stack))
    {
        printf("Can't Pop: stack underflow\n");
        return 0;
    }

    realloc(stack->Content, sizeof(TYPE) * stack->Size);
    if(stack == '\0')
    {
        printf("ERROR: Can't reallocate Memory");
        return;
    }
    stack->Size--;

    return stack->Content[stack->Top--];
}

inline void Push(struct Stack* stack, TYPE element)
{
    if (stack->Top == stack->Size - 1)
    {
        realloc(stack->Content, sizeof(TYPE) * stack->Size + 1);
        if(stack == '\0')
        {
            printf("ERROR: Can't reallocate Memory");
            return;
        }
        stack->Size++;
    }
    stack->Content[++stack->Top] = element;
}

inline void Delete(struct Stack* stack)
{
    free(stack);
}

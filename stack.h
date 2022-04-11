#pragma once
#include "stdlib.h"
#include "stdio.h"

// inline typename* typename##Start(unsigned int size);
// inline int typename##IsFull(typename* stack);
// inline int typename##IsEmpty(typename* stack);
// inline int typename##Size(typename* stack);
// inline TYPE typename##Peek(typename* stack);
// inline TYPE typename##Pop(typename* stack);
// inline void typename##Push(typename* stack, TYPE element);
// inline void typename##Delete(typename* stack);

#define CREATE_STACK(typename, TYPE) \
typedef struct  \
{ \
    int Top; \
    unsigned int Size; \
    TYPE* Content; \
} typename; \
\
inline typename* typename##Start(unsigned int size) \
{ \
    typename* stack = malloc(sizeof(typename)); \
    stack->Size = size; \
    stack->Top = -1; \
    stack->Content = (TYPE*)malloc(stack->Size * sizeof(TYPE)); \
    return stack; \
} \
\
inline int typename##IsFull(typename* stack) \
{ \
    return (stack->Top == stack->Size -1); \
} \
\
inline int typename##IsEmpty(typename* stack) \
{ \
    return (stack->Top == -1); \
} \
\
inline int typename##Size(typename* stack) \
{ \
    return stack->Top + 1; \
} \
\
inline TYPE typename##Peek(typename* stack) \
{\
    if (typename##IsEmpty(stack)) \
    { \
        return 0; \
    } \
    return stack->Content[stack->Top]; \
} \
\
inline TYPE typename##Pop(typename* stack) \
{ \
    if (typename##IsEmpty(stack)) \
    { \
        printf("Can't Pop: stack underflow\n"); \
        return 0; \
    } \
    return stack->Content[stack->Top--]; \
} \
\
inline void typename##Push(typename* stack, TYPE element) \
{ \
    if (typename##IsFull(stack)) \
    { \
        printf("Can't Push: stack overflow\n"); \
        return; \
    } \
    stack->Content[++stack->Top] = element; \
} \
\
inline void typename##Delete(typename* stack) \
{ \
    free(stack); \
}

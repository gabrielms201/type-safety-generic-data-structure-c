#pragma once
#include "stdlib.h"
#include "stdio.h"
#include "string.h"



// Stack* Start();
// inline int IsFull(Stack* stack);
// inline int IsEmpty(Stack* stack);
// inline int Size(Stack* stack);
// inline TYPE Peek(Stack* stack);
// inline TYPE Pop(Stack* stack);
// inline void Push(Stack* stack, TYPE element);
// inline void Delete(Stack* stack);

#define CREATE_DY_STACK(typename, TYPE) \
typedef struct \
{ \
    int Top; \
    int Size; \
    TYPE* Content; \
} typename; \
inline typename* typename##Start() \
{ \
    typename* stack = (typename*) malloc(sizeof(typename)); \
    if(stack == '\0') \
    { \
        printf("ERROR: Can't allocate Memory"); \
        abort(); \
    } \
    stack->Top = -1; \
    stack->Size = 1; \
    stack->Content = (TYPE*) malloc(stack->Size * sizeof(TYPE)); \
    return stack; \
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
{ \
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
    }\
\
    realloc(stack->Content, sizeof(TYPE) * stack->Size); \
    if(stack == '\0') \
    { \
        printf("ERROR: Can't reallocate Memory"); \
        return 0; \
    } \
    stack->Size--; \
\
    return stack->Content[stack->Top--]; \
} \
\
inline void typename##Push(typename* stack, TYPE element) \
{ \
    if (stack->Top == stack->Size - 1) \
    { \
        realloc(stack->Content, sizeof(TYPE) * stack->Size + 1); \
        if(stack == '\0') \
        { \
            printf("ERROR: Can't reallocate Memory"); \
            return; \
        } \
        stack->Size++; \
    } \
    stack->Content[++stack->Top] = element; \
} \
\
inline void typename##Delete(typename* stack) \
{ \
    free(stack); \
}

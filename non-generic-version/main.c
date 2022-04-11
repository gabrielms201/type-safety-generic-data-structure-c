#include <stdio.h>
#include "stack.h"

int main()
{
    printf("Hello, World!\n");

    struct Stack* stack = Start(10);
    Push(stack, 1.2);
    Push(stack, 2.3);
    Push(stack, 3.2);
    Push(stack, 4.1);
    Push(stack, 5.1);

    while (!IsEmpty(stack))
    {
        printf("- %.2f - ", Pop(stack));
    }
    return 0;
}
